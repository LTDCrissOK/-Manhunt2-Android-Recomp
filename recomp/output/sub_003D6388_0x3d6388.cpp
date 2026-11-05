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

// Function: sub_003D6388
// Address: 0x3d6388 - 0x3d65f0
void sub_003D6388_0x3d6388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6388_0x3d6388");
#endif

    switch (ctx->pc) {
        case 0x3d63b4u: goto label_3d63b4;
        case 0x3d63c0u: goto label_3d63c0;
        case 0x3d63dcu: goto label_3d63dc;
        case 0x3d63f0u: goto label_3d63f0;
        case 0x3d6400u: goto label_3d6400;
        case 0x3d64d0u: goto label_3d64d0;
        case 0x3d6500u: goto label_3d6500;
        case 0x3d65c8u: goto label_3d65c8;
        case 0x3d65d0u: goto label_3d65d0;
        default: break;
    }

    ctx->pc = 0x3d6388u;

    // 0x3d6388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d6388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d638c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d6390: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d6390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d6394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d6394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6398: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d639c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d63a0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3d63a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d63a4: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D63A4u;
    {
        const bool branch_taken_0x3d63a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63A4u;
        // 0x3d63a8: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63a4) {
            ctx->pc = 0x3D63B4u;
            goto label_3d63b4;
        }
    }
    ctx->pc = 0x3D63ACu;
    // 0x3d63ac: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x3D63ACu;
    SET_GPR_U32(ctx, 31, 0x3D63B4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x3D63ACu, 0x3D63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63B4u;
label_3d63b4:
    // 0x3d63b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d63b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d63b8: 0xc0f5c00  jal         func_3D7000
    ctx->pc = 0x3D63B8u;
    SET_GPR_U32(ctx, 31, 0x3D63C0u);
    ctx->pc = 0x3D63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63B8u;
    // 0x3d63bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7000u, 0x3D63B8u, 0x3D63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63C0u;
label_3d63c0:
    // 0x3d63c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d63c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3d63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3d63c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d63cc: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D63CCu;
    {
        const bool branch_taken_0x3d63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3d63cc) {
            ctx->pc = 0x3D63D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D63CCu;
            // 0x3d63d0: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D63DCu;
            goto label_3d63dc;
        }
    }
    ctx->pc = 0x3D63D4u;
    // 0x3d63d4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x3D63D4u;
    SET_GPR_U32(ctx, 31, 0x3D63DCu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x3D63D4u, 0x3D63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63DCu;
label_3d63dc:
    // 0x3d63dc: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x3d63dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d63e0: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x3D63E0u;
    {
        const bool branch_taken_0x3d63e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63E0u;
        // 0x3d63e4: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63e0) {
            ctx->pc = 0x3D64B4u;
            goto label_3d64b4;
        }
    }
    ctx->pc = 0x3D63E8u;
    // 0x3d63e8: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x3d63e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d63ec: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x3d63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_3d63f0:
    // 0x3d63f0: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x3d63f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d63f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3D63F4u;
    {
        const bool branch_taken_0x3d63f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63F4u;
        // 0x3d63f8: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63f4) {
            ctx->pc = 0x3D6494u;
            goto label_3d6494;
        }
    }
    ctx->pc = 0x3D63FCu;
    // 0x3d63fc: 0x0  nop
    ctx->pc = 0x3d63fcu;
    // NOP
label_3d6400:
    // 0x3d6400: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x3d6400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3d6404: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3d6404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3d6408: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D6408u;
    {
        const bool branch_taken_0x3d6408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6408u;
        // 0x3d640c: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6408) {
            ctx->pc = 0x3D6458u;
            goto label_3d6458;
        }
    }
    ctx->pc = 0x3D6410u;
    // 0x3d6410: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x3d6410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3d6414: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x3d6414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d6418: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3d6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3d641c: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x3d641cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3d6420: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d6420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d6424: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3d6424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d6428: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D6428u;
    {
        const bool branch_taken_0x3d6428 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6428u;
        // 0x3d642c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6428) {
            ctx->pc = 0x3D645Cu;
            goto label_3d645c;
        }
    }
    ctx->pc = 0x3D6430u;
    // 0x3d6430: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x3d6430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3d6434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d6434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6438: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d643c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d6440: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D6440u;
    {
        const bool branch_taken_0x3d6440 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6440u;
        // 0x3d6444: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6440) {
            ctx->pc = 0x3D6460u;
            goto label_3d6460;
        }
    }
    ctx->pc = 0x3D6448u;
    // 0x3d6448: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x3d6448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x3d644c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x3d644cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x3d6450: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D6450u;
    {
        const bool branch_taken_0x3d6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6450u;
        // 0x3d6454: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6450) {
            ctx->pc = 0x3D6490u;
            goto label_3d6490;
        }
    }
    ctx->pc = 0x3D6458u;
label_3d6458:
    // 0x3d6458: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x3d6458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d645c:
    // 0x3d645c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x3d645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_3d6460:
    // 0x3d6460: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x3d6460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3d6464: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3d6464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3d6468: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3d6468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d646c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d6470: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d6474: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d6474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d6478: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D6478u;
    {
        const bool branch_taken_0x3d6478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d6478) {
            ctx->pc = 0x3D64A4u;
            goto label_3d64a4;
        }
    }
    ctx->pc = 0x3D6480u;
    // 0x3d6480: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3d6480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3d6484: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x3d6484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x3d6488: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x3d6488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d648c: 0x0  nop
    ctx->pc = 0x3d648cu;
    // NOP
label_3d6490:
    // 0x3d6490: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x3d6490u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d6494:
    // 0x3d6494: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x3d6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d6498: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x3d6498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3d649c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3D649Cu;
    {
        const bool branch_taken_0x3d649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D649Cu;
        // 0x3d64a0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d649c) {
            ctx->pc = 0x3D6400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6400;
        }
    }
    ctx->pc = 0x3D64A4u;
label_3d64a4:
    // 0x3d64a4: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3D64A4u;
    {
        const bool branch_taken_0x3d64a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64A4u;
        // 0x3d64a8: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64a4) {
            ctx->pc = 0x3D63F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d63f0;
        }
    }
    ctx->pc = 0x3D64ACu;
    // 0x3d64ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D64ACu;
    {
        const bool branch_taken_0x3d64ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d64ac) {
            ctx->pc = 0x3D64B8u;
            goto label_3d64b8;
        }
    }
    ctx->pc = 0x3D64B4u;
label_3d64b4:
    // 0x3d64b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x3d64b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d64b8:
    // 0x3d64b8: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x3D64B8u;
    {
        const bool branch_taken_0x3d64b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B8u;
        // 0x3d64bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64b8) {
            ctx->pc = 0x3D65C0u;
            goto label_3d65c0;
        }
    }
    ctx->pc = 0x3D64C0u;
    // 0x3d64c0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x3d64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x3d64c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d64c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d64c8: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x3d64c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3d64cc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x3d64ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_3d64d0:
    // 0x3d64d0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3d64d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3d64d4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3d64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3d64d8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x3d64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3d64dc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x3d64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x3d64e0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3d64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x3d64e4: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x3d64e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3d64e8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3D64E8u;
    {
        const bool branch_taken_0x3d64e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64E8u;
        // 0x3d64ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64e8) {
            ctx->pc = 0x3D65B0u;
            goto label_3d65b0;
        }
    }
    ctx->pc = 0x3D64F0u;
    // 0x3d64f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d64f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d64f4: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x3d64f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d64f8: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x3d64f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3d64fc: 0x0  nop
    ctx->pc = 0x3d64fcu;
    // NOP
label_3d6500:
    // 0x3d6500: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3d6500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3d6504: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D6504u;
    {
        const bool branch_taken_0x3d6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6504u;
        // 0x3d6508: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6504) {
            ctx->pc = 0x3D6558u;
            goto label_3d6558;
        }
    }
    ctx->pc = 0x3D650Cu;
    // 0x3d650c: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x3d650cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x3d6510: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x3d6510u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d6514: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3d6514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3d6518: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x3d6518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3d651c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d6520: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3d6520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d6524: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D6524u;
    {
        const bool branch_taken_0x3d6524 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6524u;
        // 0x3d6528: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6524) {
            ctx->pc = 0x3D655Cu;
            goto label_3d655c;
        }
    }
    ctx->pc = 0x3D652Cu;
    // 0x3d652c: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x3d652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3d6530: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d6530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6534: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d6534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d6538: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3d6538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d653c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D653Cu;
    {
        const bool branch_taken_0x3d653c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D653Cu;
        // 0x3d6540: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d653c) {
            ctx->pc = 0x3D6560u;
            goto label_3d6560;
        }
    }
    ctx->pc = 0x3D6544u;
    // 0x3d6544: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x3d6544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x3d6548: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x3d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x3d654c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3D654Cu;
    {
        const bool branch_taken_0x3d654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D654Cu;
        // 0x3d6550: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d654c) {
            ctx->pc = 0x3D6590u;
            goto label_3d6590;
        }
    }
    ctx->pc = 0x3D6554u;
    // 0x3d6554: 0x0  nop
    ctx->pc = 0x3d6554u;
    // NOP
label_3d6558:
    // 0x3d6558: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x3d6558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d655c:
    // 0x3d655c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x3d655cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_3d6560:
    // 0x3d6560: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x3d6560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x3d6564: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3d6564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3d6568: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3d6568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d656c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d6570: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d6570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d6574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d6574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d6578: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D6578u;
    {
        const bool branch_taken_0x3d6578 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d6578) {
            ctx->pc = 0x3D65B4u;
            goto label_3d65b4;
        }
    }
    ctx->pc = 0x3D6580u;
    // 0x3d6580: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3d6580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3d6584: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x3d6584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x3d6588: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x3d6588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d658c: 0x0  nop
    ctx->pc = 0x3d658cu;
    // NOP
label_3d6590:
    // 0x3d6590: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3d6590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d6594: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3d6594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6598: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x3d6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d659c: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x3d659cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3d65a0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3D65A0u;
    {
        const bool branch_taken_0x3d65a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65A0u;
        // 0x3d65a4: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d65a0) {
            ctx->pc = 0x3D6500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6500;
        }
    }
    ctx->pc = 0x3D65A8u;
    // 0x3d65a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D65A8u;
    {
        const bool branch_taken_0x3d65a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d65a8) {
            ctx->pc = 0x3D65B4u;
            goto label_3d65b4;
        }
    }
    ctx->pc = 0x3D65B0u;
label_3d65b0:
    // 0x3d65b0: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x3d65b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d65b4:
    // 0x3d65b4: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3D65B4u;
    {
        const bool branch_taken_0x3d65b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65B4u;
        // 0x3d65b8: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d65b4) {
            ctx->pc = 0x3D64D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d64d0;
        }
    }
    ctx->pc = 0x3D65BCu;
    // 0x3d65bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d65bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d65c0:
    // 0x3d65c0: 0xc0f58a2  jal         func_3D6288
    ctx->pc = 0x3D65C0u;
    SET_GPR_U32(ctx, 31, 0x3D65C8u);
    ctx->pc = 0x3D65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D65C0u;
    // 0x3d65c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6288u, 0x3D65C0u, 0x3D65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D65C8u;
label_3d65c8:
    // 0x3d65c8: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D65C8u;
    SET_GPR_U32(ctx, 31, 0x3D65D0u);
    ctx->pc = 0x3D65CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D65C8u;
    // 0x3d65cc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D65C8u, 0x3D65D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D65D0u;
label_3d65d0:
    // 0x3d65d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d65d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d65d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d65d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d65d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d65dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d65dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d65e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d65e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d65e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D65E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65E4u;
        // 0x3d65e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D65E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D65ECu;
    // 0x3d65ec: 0x0  nop
    ctx->pc = 0x3d65ecu;
    // NOP
    ctx->pc = 0x3d65f0u;
}
