#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6410
// Address: 0x3a6410 - 0x3a6530
void sub_003A6410_0x3a6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6410_0x3a6410");
#endif

    switch (ctx->pc) {
        case 0x3a64c0u: goto label_3a64c0;
        case 0x3a64d0u: goto label_3a64d0;
        case 0x3a64e0u: goto label_3a64e0;
        case 0x3a64f0u: goto label_3a64f0;
        case 0x3a6500u: goto label_3a6500;
        case 0x3a6510u: goto label_3a6510;
        default: break;
    }

    ctx->pc = 0x3a6410u;

    // 0x3a6410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6414: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a6414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a641c: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3A641Cu;
    {
        const bool branch_taken_0x3a641c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A641Cu;
        // 0x3a6420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a641c) {
            ctx->pc = 0x3A6520u;
            goto label_3a6520;
        }
    }
    ctx->pc = 0x3A6424u;
    // 0x3a6424: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x3a6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x3a6428: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A6428u;
    {
        const bool branch_taken_0x3a6428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6428u;
        // 0x3a642c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6428) {
            ctx->pc = 0x3A64D8u;
            goto label_3a64d8;
        }
    }
    ctx->pc = 0x3A6430u;
    // 0x3a6430: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A6430u;
    {
        const bool branch_taken_0x3a6430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6430u;
        // 0x3a6434: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6430) {
            ctx->pc = 0x3A6478u;
            goto label_3a6478;
        }
    }
    ctx->pc = 0x3A6438u;
    // 0x3a6438: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x3a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x3a643c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A643Cu;
    {
        const bool branch_taken_0x3a643c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A643Cu;
        // 0x3a6440: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a643c) {
            ctx->pc = 0x3A64C8u;
            goto label_3a64c8;
        }
    }
    ctx->pc = 0x3A6444u;
    // 0x3a6444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6444u;
    {
        const bool branch_taken_0x3a6444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6444u;
        // 0x3a6448: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6444) {
            ctx->pc = 0x3A6460u;
            goto label_3a6460;
        }
    }
    ctx->pc = 0x3A644Cu;
    // 0x3a644c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x3a644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3a6450: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A6450u;
    {
        const bool branch_taken_0x3a6450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6450u;
        // 0x3a6454: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6450) {
            ctx->pc = 0x3A64B8u;
            goto label_3a64b8;
        }
    }
    ctx->pc = 0x3A6458u;
    // 0x3a6458: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3A6458u;
    {
        const bool branch_taken_0x3a6458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6458u;
        // 0x3a645c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6458) {
            ctx->pc = 0x3A6524u;
            goto label_3a6524;
        }
    }
    ctx->pc = 0x3A6460u;
label_3a6460:
    // 0x3a6460: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A6460u;
    {
        const bool branch_taken_0x3a6460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6460u;
        // 0x3a6464: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6460) {
            ctx->pc = 0x3A64D8u;
            goto label_3a64d8;
        }
    }
    ctx->pc = 0x3A6468u;
    // 0x3a6468: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A6468u;
    {
        const bool branch_taken_0x3a6468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6468u;
        // 0x3a646c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6468) {
            ctx->pc = 0x3A64E8u;
            goto label_3a64e8;
        }
    }
    ctx->pc = 0x3A6470u;
    // 0x3a6470: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3A6470u;
    {
        const bool branch_taken_0x3a6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6470u;
        // 0x3a6474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6470) {
            ctx->pc = 0x3A6524u;
            goto label_3a6524;
        }
    }
    ctx->pc = 0x3A6478u;
label_3a6478:
    // 0x3a6478: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A6478u;
    {
        const bool branch_taken_0x3a6478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6478u;
        // 0x3a647c: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6478) {
            ctx->pc = 0x3A6518u;
            goto label_3a6518;
        }
    }
    ctx->pc = 0x3A6480u;
    // 0x3a6480: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6480u;
    {
        const bool branch_taken_0x3a6480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6480u;
        // 0x3a6484: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6480) {
            ctx->pc = 0x3A64A0u;
            goto label_3a64a0;
        }
    }
    ctx->pc = 0x3A6488u;
    // 0x3a6488: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x3a6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x3a648c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A648Cu;
    {
        const bool branch_taken_0x3a648c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A648Cu;
        // 0x3a6490: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a648c) {
            ctx->pc = 0x3A64E8u;
            goto label_3a64e8;
        }
    }
    ctx->pc = 0x3A6494u;
    // 0x3a6494: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A6494u;
    {
        const bool branch_taken_0x3a6494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6494u;
        // 0x3a6498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6494) {
            ctx->pc = 0x3A6524u;
            goto label_3a6524;
        }
    }
    ctx->pc = 0x3A649Cu;
    // 0x3a649c: 0x0  nop
    ctx->pc = 0x3a649cu;
    // NOP
label_3a64a0:
    // 0x3a64a0: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A64A0u;
    {
        const bool branch_taken_0x3a64a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A0u;
        // 0x3a64a4: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a0) {
            ctx->pc = 0x3A64F8u;
            goto label_3a64f8;
        }
    }
    ctx->pc = 0x3A64A8u;
    // 0x3a64a8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A64A8u;
    {
        const bool branch_taken_0x3a64a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A8u;
        // 0x3a64ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a8) {
            ctx->pc = 0x3A6508u;
            goto label_3a6508;
        }
    }
    ctx->pc = 0x3A64B0u;
    // 0x3a64b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A64B0u;
    {
        const bool branch_taken_0x3a64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64B0u;
        // 0x3a64b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64b0) {
            ctx->pc = 0x3A6524u;
            goto label_3a6524;
        }
    }
    ctx->pc = 0x3A64B8u;
label_3a64b8:
    // 0x3a64b8: 0xc0e98d4  jal         func_3A6350
    ctx->pc = 0x3A64B8u;
    SET_GPR_U32(ctx, 31, 0x3A64C0u);
    ctx->pc = 0x3A6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6350u, 0x3A64B8u, 0x3A64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64C0u;
label_3a64c0:
    // 0x3a64c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3A64C0u;
    {
        const bool branch_taken_0x3a64c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64C0u;
        // 0x3a64c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64c0) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A64C8u;
label_3a64c8:
    // 0x3a64c8: 0xc0e98dc  jal         func_3A6370
    ctx->pc = 0x3A64C8u;
    SET_GPR_U32(ctx, 31, 0x3A64D0u);
    ctx->pc = 0x3A6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6370u, 0x3A64C8u, 0x3A64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64D0u;
label_3a64d0:
    // 0x3a64d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A64D0u;
    {
        const bool branch_taken_0x3a64d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64D0u;
        // 0x3a64d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64d0) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A64D8u;
label_3a64d8:
    // 0x3a64d8: 0xc0e98e8  jal         func_3A63A0
    ctx->pc = 0x3A64D8u;
    SET_GPR_U32(ctx, 31, 0x3A64E0u);
    ctx->pc = 0x3A63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A63A0u, 0x3A64D8u, 0x3A64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64E0u;
label_3a64e0:
    // 0x3a64e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A64E0u;
    {
        const bool branch_taken_0x3a64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64E0u;
        // 0x3a64e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64e0) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A64E8u;
label_3a64e8:
    // 0x3a64e8: 0xc0e98f0  jal         func_3A63C0
    ctx->pc = 0x3A64E8u;
    SET_GPR_U32(ctx, 31, 0x3A64F0u);
    ctx->pc = 0x3A63C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A63C0u, 0x3A64E8u, 0x3A64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64F0u;
label_3a64f0:
    // 0x3a64f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A64F0u;
    {
        const bool branch_taken_0x3a64f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64F0u;
        // 0x3a64f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64f0) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A64F8u;
label_3a64f8:
    // 0x3a64f8: 0xc0e98fc  jal         func_3A63F0
    ctx->pc = 0x3A64F8u;
    SET_GPR_U32(ctx, 31, 0x3A6500u);
    ctx->pc = 0x3A63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A63F0u, 0x3A64F8u, 0x3A6500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6500u;
label_3a6500:
    // 0x3a6500: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6500u;
    {
        const bool branch_taken_0x3a6500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6500u;
        // 0x3a6504: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6500) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A6508u;
label_3a6508:
    // 0x3a6508: 0xc0e9900  jal         func_3A6400
    ctx->pc = 0x3A6508u;
    SET_GPR_U32(ctx, 31, 0x3A6510u);
    ctx->pc = 0x3A6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6400u, 0x3A6508u, 0x3A6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6510u;
label_3a6510:
    // 0x3a6510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6510u;
    {
        const bool branch_taken_0x3a6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6510u;
        // 0x3a6514: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6510) {
            ctx->pc = 0x3A651Cu;
            goto label_3a651c;
        }
    }
    ctx->pc = 0x3A6518u;
label_3a6518:
    // 0x3a6518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a651c:
    // 0x3a651c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a651cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6520:
    // 0x3a6520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6524:
    // 0x3a6524: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6524u;
        // 0x3a6528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A652Cu;
    // 0x3a652c: 0x0  nop
    ctx->pc = 0x3a652cu;
    // NOP
    ctx->pc = 0x3a6530u;
}
