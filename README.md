# adi_dsa

Project adi_dsa — repository for algorithm & data-structure problems and their solutions.

Purpose
- Collect well-documented solutions to algorithm and data-structure problems.
- Provide a clear, repeatable workflow for contributors so solutions can be reviewed and merged.

Contribution workflow (Git + JIRA)

1. Create a branch for each problem or task.
   - Branch naming: problem/<problem-title>
     Example: problem/factorial_of_a_number

2. Implement your solution locally.
   - Add files: git add .
   - Stage & commit: git commit -m "<any-message>"
   - Push branch: git push origin <branch-name>

3. Create a JIRA task for the solution:
   - Create a ticket with summary and description.
   - Attach the GitHub branch URL to the JIRA ticket.

4. Open a Pull Request (PR) from your branch to master (or main).
   - Include the PR template checklist (see below).
   - Link the JIRA ticket in the PR description.

Review process
- Reviewer checks correctness, readability, tests, and documentation.
- If changes required, iterate on the same branch and push updates.
- After approval, merge into master/main and close the JIRA ticket.
