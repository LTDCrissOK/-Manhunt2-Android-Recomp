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

// Function: sub_002D8530
// Address: 0x2d8530 - 0x2d8bc0
void sub_002D8530_0x2d8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8530_0x2d8530");
#endif

    switch (ctx->pc) {
        case 0x2d8590u: goto label_2d8590;
        case 0x2d85e8u: goto label_2d85e8;
        case 0x2d8624u: goto label_2d8624;
        case 0x2d86bcu: goto label_2d86bc;
        case 0x2d86e4u: goto label_2d86e4;
        case 0x2d8710u: goto label_2d8710;
        case 0x2d873cu: goto label_2d873c;
        case 0x2d8790u: goto label_2d8790;
        case 0x2d87ccu: goto label_2d87cc;
        case 0x2d8830u: goto label_2d8830;
        case 0x2d8858u: goto label_2d8858;
        case 0x2d888cu: goto label_2d888c;
        case 0x2d88c8u: goto label_2d88c8;
        case 0x2d8928u: goto label_2d8928;
        case 0x2d8964u: goto label_2d8964;
        case 0x2d8988u: goto label_2d8988;
        case 0x2d89bcu: goto label_2d89bc;
        case 0x2d89f8u: goto label_2d89f8;
        case 0x2d8a30u: goto label_2d8a30;
        case 0x2d8a40u: goto label_2d8a40;
        case 0x2d8a5cu: goto label_2d8a5c;
        case 0x2d8ae8u: goto label_2d8ae8;
        case 0x2d8b10u: goto label_2d8b10;
        case 0x2d8b28u: goto label_2d8b28;
        case 0x2d8b54u: goto label_2d8b54;
        case 0x2d8b78u: goto label_2d8b78;
        default: break;
    }

    ctx->pc = 0x2d8530u;

    // 0x2d8530: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d8534: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2d8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2d8538: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2d8538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2d853c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d853cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8540: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2d8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2d8544: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2d8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d8548: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2d8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2d854c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2d854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2d8550: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2d8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2d8554: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2d8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2d8558: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2d8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2d855c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2d855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2d8560: 0x8ede0030  lw          $fp, 0x30($s6)
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x2d8564: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x2d8568: 0x13c20188  beq         $fp, $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8568u;
        // 0x2d856c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D8B8Cu;
            goto label_2d8b8c;
        }
    }
    ctx->pc = 0x2D8570u;
    // 0x2d8570: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2d8574: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2d8574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2d8578: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2d8578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d857c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d8580: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2d8580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2d8584: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d8584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d8588: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2d8588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2d858c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2d8590:
    // 0x2d8590: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2d8590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d8594: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2d8598: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d8598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d859c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d859cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d85a0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d85a4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2d85a8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2d85a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d85ac: 0x10600177  beqz        $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x2D85ACu;
    {
        const bool branch_taken_0x2d85ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85ACu;
        // 0x2d85b0: 0x26d20020  addiu       $s2, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85ac) {
            ctx->pc = 0x2D8B8Cu;
            goto label_2d8b8c;
        }
    }
    ctx->pc = 0x2D85B4u;
    // 0x2d85b4: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x2d85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2d85b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d85bc: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x2d85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d85c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d85c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d85c4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2d85c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d85cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d85d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d85d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d85d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D85D4u;
    {
        const bool branch_taken_0x2d85d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85D4u;
        // 0x2d85d8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85d4) {
            ctx->pc = 0x2D85F0u;
            goto label_2d85f0;
        }
    }
    ctx->pc = 0x2D85DCu;
    // 0x2d85dc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x2d85dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d85e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D85E0u;
    SET_GPR_U32(ctx, 31, 0x2D85E8u);
    ctx->pc = 0x2D85E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D85E0u;
    // 0x2d85e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D85E0u, 0x2D85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85E8u;
label_2d85e8:
    // 0x2d85e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D85E8u;
    {
        const bool branch_taken_0x2d85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85E8u;
        // 0x2d85ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85e8) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D85F0u;
label_2d85f0:
    // 0x2d85f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d85f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d85f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d85f8:
    // 0x2d85f8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x2d85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d85fc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2d85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x2d8600: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d8600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d8604: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x2d8604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x2d8608: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d8608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d860c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2d860cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d8610: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8610u;
    {
        const bool branch_taken_0x2d8610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8610u;
        // 0x2d8614: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8610) {
            ctx->pc = 0x2D862Cu;
            goto label_2d862c;
        }
    }
    ctx->pc = 0x2D8618u;
    // 0x2d8618: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d8618u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d861c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D861Cu;
    SET_GPR_U32(ctx, 31, 0x2D8624u);
    ctx->pc = 0x2D8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D861Cu;
    // 0x2d8620: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D861Cu, 0x2D8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8624u;
label_2d8624:
    // 0x2d8624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8624u;
    {
        const bool branch_taken_0x2d8624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8624u;
        // 0x2d8628: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8624) {
            ctx->pc = 0x2D8630u;
            goto label_2d8630;
        }
    }
    ctx->pc = 0x2D862Cu;
label_2d862c:
    // 0x2d862c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d8630:
    // 0x2d8630: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d8630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d8634: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x2d8634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d8638: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2d8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d863c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D863Cu;
    {
        const bool branch_taken_0x2d863c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D863Cu;
        // 0x2d8640: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d863c) {
            ctx->pc = 0x2D8678u;
            goto label_2d8678;
        }
    }
    ctx->pc = 0x2D8644u;
    // 0x2d8644: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8644u;
    {
        const bool branch_taken_0x2d8644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8644u;
        // 0x2d8648: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8644) {
            ctx->pc = 0x2D8658u;
            goto label_2d8658;
        }
    }
    ctx->pc = 0x2D864Cu;
    // 0x2d864c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d8650: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d8654: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d8658:
    // 0x2d8658: 0x26c30030  addiu       $v1, $s6, 0x30
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x2d865c: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2d8660: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x2d8660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x2d8664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d8664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8668: 0x26d70010  addiu       $s7, $s6, 0x10
    ctx->pc = 0x2d8668u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2d866c: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x2d866cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x2d8670: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D8670u;
    {
        const bool branch_taken_0x2d8670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8670u;
        // 0x2d8674: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8670) {
            ctx->pc = 0x2D874Cu;
            goto label_2d874c;
        }
    }
    ctx->pc = 0x2D8678u;
label_2d8678:
    // 0x2d8678: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d867c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8680: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2d8680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2d8684: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d8688: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d8688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d868c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2d868cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2d8690: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d8694: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x2d8694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d8698: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d8698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d869c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2d869cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2d86a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d86a4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d86a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D86A8u;
    {
        const bool branch_taken_0x2d86a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86A8u;
        // 0x2d86ac: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86a8) {
            ctx->pc = 0x2D86C4u;
            goto label_2d86c4;
        }
    }
    ctx->pc = 0x2D86B0u;
    // 0x2d86b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d86b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D86B4u;
    SET_GPR_U32(ctx, 31, 0x2D86BCu);
    ctx->pc = 0x2D86B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86B4u;
    // 0x2d86b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D86B4u, 0x2D86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86BCu;
label_2d86bc:
    // 0x2d86bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D86BCu;
    {
        const bool branch_taken_0x2d86bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86BCu;
        // 0x2d86c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86bc) {
            ctx->pc = 0x2D86CCu;
            goto label_2d86cc;
        }
    }
    ctx->pc = 0x2D86C4u;
label_2d86c4:
    // 0x2d86c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d86c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d86c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d86cc:
    // 0x2d86cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d86ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d86d0: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D86D0u;
    {
        const bool branch_taken_0x2d86d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86D0u;
        // 0x2d86d4: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86d0) {
            ctx->pc = 0x2D86ECu;
            goto label_2d86ec;
        }
    }
    ctx->pc = 0x2D86D8u;
    // 0x2d86d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d86d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86dc: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D86DCu;
    SET_GPR_U32(ctx, 31, 0x2D86E4u);
    ctx->pc = 0x2D86E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86DCu;
    // 0x2d86e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D86DCu, 0x2D86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86E4u;
label_2d86e4:
    // 0x2d86e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D86E4u;
    {
        const bool branch_taken_0x2d86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86E4u;
        // 0x2d86e8: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86e4) {
            ctx->pc = 0x2D86F0u;
            goto label_2d86f0;
        }
    }
    ctx->pc = 0x2D86ECu;
label_2d86ec:
    // 0x2d86ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d86ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d86f0:
    // 0x2d86f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d86f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86f4: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x2d86f8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2d86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2d86fc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2d86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d8700: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d8700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d8704: 0x26d70010  addiu       $s7, $s6, 0x10
    ctx->pc = 0x2d8704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2d8708: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8708u;
    {
        const bool branch_taken_0x2d8708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8708u;
        // 0x2d870c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8708) {
            ctx->pc = 0x2D8728u;
            goto label_2d8728;
        }
    }
    ctx->pc = 0x2D8710u;
label_2d8710:
    // 0x2d8710: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d8714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8718: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d871c: 0x0  nop
    ctx->pc = 0x2d871cu;
    // NOP
    // 0x2d8720: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8720u;
    {
        const bool branch_taken_0x2d8720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8720u;
        // 0x2d8724: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8720) {
            ctx->pc = 0x2D8710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8710;
        }
    }
    ctx->pc = 0x2D8728u;
label_2d8728:
    // 0x2d8728: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d8728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d872c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D872Cu;
        // 0x2d8730: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D8740u;
            goto label_2d8740;
        }
    }
    ctx->pc = 0x2D8734u;
    // 0x2d8734: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8734u;
    SET_GPR_U32(ctx, 31, 0x2D873Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8734u, 0x2D873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D873Cu;
label_2d873c:
    // 0x2d873c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2d873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2d8740:
    // 0x2d8740: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2d8740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2d8744: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2d8744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2d8748: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2d8748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2d874c:
    // 0x2d874c: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d8750: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x2d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2d8754: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2d8754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8758: 0x12820024  beq         $s4, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8758u;
    {
        const bool branch_taken_0x2d8758 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8758u;
        // 0x2d875c: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8758) {
            ctx->pc = 0x2D87ECu;
            goto label_2d87ec;
        }
    }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D8760u;
    {
        const bool branch_taken_0x2d8760 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8760u;
        // 0x2d8764: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8760) {
            ctx->pc = 0x2D87DCu;
            goto label_2d87dc;
        }
    }
    ctx->pc = 0x2D8768u;
    // 0x2d8768: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d876c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x2d876cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x2d8770: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8774: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2d8774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2d8778: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d877c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D877Cu;
    {
        const bool branch_taken_0x2d877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D877Cu;
        // 0x2d8780: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d877c) {
            ctx->pc = 0x2D8798u;
            goto label_2d8798;
        }
    }
    ctx->pc = 0x2D8784u;
    // 0x2d8784: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d8788: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8788u;
    SET_GPR_U32(ctx, 31, 0x2D8790u);
    ctx->pc = 0x2D878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8788u;
    // 0x2d878c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8788u, 0x2D8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8790u;
label_2d8790:
    // 0x2d8790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8790u;
    {
        const bool branch_taken_0x2d8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8790u;
        // 0x2d8794: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8790) {
            ctx->pc = 0x2D87A0u;
            goto label_2d87a0;
        }
    }
    ctx->pc = 0x2D8798u;
label_2d8798:
    // 0x2d8798: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d879c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d87a0:
    // 0x2d87a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d87a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d87a8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d87ac: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d87acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d87b0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d87b4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2d87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d87b8: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D87B8u;
    {
        const bool branch_taken_0x2d87b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87B8u;
        // 0x2d87bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87b8) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D87C0u;
    // 0x2d87c0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d87c4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D87C4u;
    SET_GPR_U32(ctx, 31, 0x2D87CCu);
    ctx->pc = 0x2D87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87C4u;
    // 0x2d87c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D87C4u, 0x2D87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87CCu;
label_2d87cc:
    // 0x2d87cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D87CCu;
    {
        const bool branch_taken_0x2d87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87CCu;
        // 0x2d87d0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87cc) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D87D4u;
label_2d87d4:
    // 0x2d87d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d87d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d87d8:
    // 0x2d87d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2d87dc:
    // 0x2d87dc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2d87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d87e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d87e4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D87E4u;
    {
        const bool branch_taken_0x2d87e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87E4u;
        // 0x2d87e8: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87e4) {
            ctx->pc = 0x2D8A74u;
            goto label_2d8a74;
        }
    }
    ctx->pc = 0x2D87ECu;
label_2d87ec:
    // 0x2d87ec: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2d87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d87f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d87f4: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2d87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2d87f8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2d87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d87fc: 0x2842023  subu        $a0, $s4, $a0
    ctx->pc = 0x2d87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2d8800: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8804: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2d8804u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2d8808: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x2d8808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d880c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d8810: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2d8810u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2d8814: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8818: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d881c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D881Cu;
    {
        const bool branch_taken_0x2d881c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D881Cu;
        // 0x2d8820: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d881c) {
            ctx->pc = 0x2D8838u;
            goto label_2d8838;
        }
    }
    ctx->pc = 0x2D8824u;
    // 0x2d8824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8828: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8828u;
    SET_GPR_U32(ctx, 31, 0x2D8830u);
    ctx->pc = 0x2D882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8828u;
    // 0x2d882c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8828u, 0x2D8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8830u;
label_2d8830:
    // 0x2d8830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8830u;
    {
        const bool branch_taken_0x2d8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8830u;
        // 0x2d8834: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8830) {
            ctx->pc = 0x2D8844u;
            goto label_2d8844;
        }
    }
    ctx->pc = 0x2D8838u;
label_2d8838:
    // 0x2d8838: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2d883c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d883cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d8840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8844:
    // 0x2d8844: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x2d8844u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d8848: 0xafb20044  sw          $s2, 0x44($sp)
    ctx->pc = 0x2d8848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
    // 0x2d884c: 0x12740025  beq         $s3, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D884Cu;
    {
        const bool branch_taken_0x2d884c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D884Cu;
        // 0x2d8850: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d884c) {
            ctx->pc = 0x2D88E4u;
            goto label_2d88e4;
        }
    }
    ctx->pc = 0x2D8854u;
    // 0x2d8854: 0x0  nop
    ctx->pc = 0x2d8854u;
    // NOP
label_2d8858:
    // 0x2d8858: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D8858u;
    {
        const bool branch_taken_0x2d8858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8858) {
            ctx->pc = 0x2D885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8858u;
            // 0x2d885c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D88DCu;
            goto label_2d88dc;
        }
    }
    ctx->pc = 0x2D8860u;
    // 0x2d8860: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d8864: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d8868: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d8868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2d886c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8870: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2d8870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2d8874: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d8878: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8878u;
    {
        const bool branch_taken_0x2d8878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8878u;
        // 0x2d887c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8878) {
            ctx->pc = 0x2D8894u;
            goto label_2d8894;
        }
    }
    ctx->pc = 0x2D8880u;
    // 0x2d8880: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2d8880u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d8884: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8884u;
    SET_GPR_U32(ctx, 31, 0x2D888Cu);
    ctx->pc = 0x2D8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8884u;
    // 0x2d8888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8884u, 0x2D888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D888Cu;
label_2d888c:
    // 0x2d888c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D888Cu;
    {
        const bool branch_taken_0x2d888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D888Cu;
        // 0x2d8890: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d888c) {
            ctx->pc = 0x2D889Cu;
            goto label_2d889c;
        }
    }
    ctx->pc = 0x2D8894u;
label_2d8894:
    // 0x2d8894: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8898: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d889c:
    // 0x2d889c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d88a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d88a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d88a8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d88ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d88acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d88b0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d88b4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D88B4u;
    {
        const bool branch_taken_0x2d88b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88B4u;
        // 0x2d88b8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88b4) {
            ctx->pc = 0x2D88D0u;
            goto label_2d88d0;
        }
    }
    ctx->pc = 0x2D88BCu;
    // 0x2d88bc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d88bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d88c0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D88C0u;
    SET_GPR_U32(ctx, 31, 0x2D88C8u);
    ctx->pc = 0x2D88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88C0u;
    // 0x2d88c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D88C0u, 0x2D88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88C8u;
label_2d88c8:
    // 0x2d88c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D88C8u;
    {
        const bool branch_taken_0x2d88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88C8u;
        // 0x2d88cc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88c8) {
            ctx->pc = 0x2D88D4u;
            goto label_2d88d4;
        }
    }
    ctx->pc = 0x2D88D0u;
label_2d88d0:
    // 0x2d88d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d88d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d88d4:
    // 0x2d88d4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d88d8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2d88dc:
    // 0x2d88dc: 0x1674ffde  bne         $s3, $s4, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2D88DCu;
    {
        const bool branch_taken_0x2d88dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88DCu;
        // 0x2d88e0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88dc) {
            ctx->pc = 0x2D8858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8858;
        }
    }
    ctx->pc = 0x2D88E4u;
label_2d88e4:
    // 0x2d88e4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2d88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d88e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88ec: 0x14440023  bne         $v0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D88ECu;
    {
        const bool branch_taken_0x2d88ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88ECu;
        // 0x2d88f0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88ec) {
            ctx->pc = 0x2D897Cu;
            goto label_2d897c;
        }
    }
    ctx->pc = 0x2D88F4u;
    // 0x2d88f4: 0x52400048  beql        $s2, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D88F4u;
    {
        const bool branch_taken_0x2d88f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88f4) {
            ctx->pc = 0x2D88F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D88F4u;
            // 0x2d88f8: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8A18u;
            goto label_2d8a18;
        }
    }
    ctx->pc = 0x2D88FCu;
    // 0x2d88fc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d8900: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2d8900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d8904: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2d8904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2d8908: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d8908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d890c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2d890cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2d8910: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d8914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8914u;
    {
        const bool branch_taken_0x2d8914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8914u;
        // 0x2d8918: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8914) {
            ctx->pc = 0x2D8930u;
            goto label_2d8930;
        }
    }
    ctx->pc = 0x2D891Cu;
    // 0x2d891c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d8920: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8920u;
    SET_GPR_U32(ctx, 31, 0x2D8928u);
    ctx->pc = 0x2D8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8920u;
    // 0x2d8924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8920u, 0x2D8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8928u;
label_2d8928:
    // 0x2d8928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8928u;
    {
        const bool branch_taken_0x2d8928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8928u;
        // 0x2d892c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8928) {
            ctx->pc = 0x2D8938u;
            goto label_2d8938;
        }
    }
    ctx->pc = 0x2D8930u;
label_2d8930:
    // 0x2d8930: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8938:
    // 0x2d8938: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d893c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d8940: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d8940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d8944: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d8944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d8948: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2d8948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d894c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2d894cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d8950: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8950u;
    {
        const bool branch_taken_0x2d8950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8950u;
        // 0x2d8954: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8950) {
            ctx->pc = 0x2D896Cu;
            goto label_2d896c;
        }
    }
    ctx->pc = 0x2D8958u;
    // 0x2d8958: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d895c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D895Cu;
    SET_GPR_U32(ctx, 31, 0x2D8964u);
    ctx->pc = 0x2D8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D895Cu;
    // 0x2d8960: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D895Cu, 0x2D8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8964u;
label_2d8964:
    // 0x2d8964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8964u;
    {
        const bool branch_taken_0x2d8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8964u;
        // 0x2d8968: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8964) {
            ctx->pc = 0x2D8970u;
            goto label_2d8970;
        }
    }
    ctx->pc = 0x2D896Cu;
label_2d896c:
    // 0x2d896c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d896cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d8970:
    // 0x2d8970: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d8970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d8974: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8974u;
    {
        const bool branch_taken_0x2d8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8974u;
        // 0x2d8978: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8974) {
            ctx->pc = 0x2D8A18u;
            goto label_2d8a18;
        }
    }
    ctx->pc = 0x2D897Cu;
label_2d897c:
    // 0x2d897c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d897cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8980: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8980u;
    {
        const bool branch_taken_0x2d8980 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8980u;
        // 0x2d8984: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8980) {
            ctx->pc = 0x2D8A14u;
            goto label_2d8a14;
        }
    }
    ctx->pc = 0x2D8988u;
label_2d8988:
    // 0x2d8988: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D8988u;
    {
        const bool branch_taken_0x2d8988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8988) {
            ctx->pc = 0x2D898Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8988u;
            // 0x2d898c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8A0Cu;
            goto label_2d8a0c;
        }
    }
    ctx->pc = 0x2D8990u;
    // 0x2d8990: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d8994: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2d8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d8998: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d8998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2d899c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d899cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d89a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2d89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2d89a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d89a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d89a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D89A8u;
    {
        const bool branch_taken_0x2d89a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89A8u;
        // 0x2d89ac: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89a8) {
            ctx->pc = 0x2D89C4u;
            goto label_2d89c4;
        }
    }
    ctx->pc = 0x2D89B0u;
    // 0x2d89b0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2d89b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d89b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D89B4u;
    SET_GPR_U32(ctx, 31, 0x2D89BCu);
    ctx->pc = 0x2D89B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89B4u;
    // 0x2d89b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D89B4u, 0x2D89BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89BCu;
label_2d89bc:
    // 0x2d89bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D89BCu;
    {
        const bool branch_taken_0x2d89bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89BCu;
        // 0x2d89c0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89bc) {
            ctx->pc = 0x2D89CCu;
            goto label_2d89cc;
        }
    }
    ctx->pc = 0x2D89C4u;
label_2d89c4:
    // 0x2d89c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d89c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d89c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d89cc:
    // 0x2d89cc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d89d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d89d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d89d8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d89dc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2d89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d89e0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d89e4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D89E4u;
    {
        const bool branch_taken_0x2d89e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89E4u;
        // 0x2d89e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89e4) {
            ctx->pc = 0x2D8A00u;
            goto label_2d8a00;
        }
    }
    ctx->pc = 0x2D89ECu;
    // 0x2d89ec: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d89ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d89f0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D89F0u;
    SET_GPR_U32(ctx, 31, 0x2D89F8u);
    ctx->pc = 0x2D89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D89F0u;
    // 0x2d89f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D89F0u, 0x2D89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89F8u;
label_2d89f8:
    // 0x2d89f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D89F8u;
    {
        const bool branch_taken_0x2d89f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89F8u;
        // 0x2d89fc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89f8) {
            ctx->pc = 0x2D8A04u;
            goto label_2d8a04;
        }
    }
    ctx->pc = 0x2D8A00u;
label_2d8a00:
    // 0x2d8a00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d8a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d8a04:
    // 0x2d8a04: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d8a08: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d8a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2d8a0c:
    // 0x2d8a0c: 0x1660ffde  bnez        $s3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2D8A0Cu;
    {
        const bool branch_taken_0x2d8a0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A0Cu;
        // 0x2d8a10: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a0c) {
            ctx->pc = 0x2D8988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8988;
        }
    }
    ctx->pc = 0x2D8A14u;
label_2d8a14:
    // 0x2d8a14: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2d8a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8a18:
    // 0x2d8a18: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x2d8a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d8a1c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2d8a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d8a20: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8A20u;
    {
        const bool branch_taken_0x2d8a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d8a20) {
            ctx->pc = 0x2D8A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8A20u;
            // 0x2d8a24: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8A4Cu;
            goto label_2d8a4c;
        }
    }
    ctx->pc = 0x2D8A28u;
    // 0x2d8a28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8a2c: 0x0  nop
    ctx->pc = 0x2d8a2cu;
    // NOP
label_2d8a30:
    // 0x2d8a30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8A30u;
    {
        const bool branch_taken_0x2d8a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A30u;
        // 0x2d8a34: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a30) {
            ctx->pc = 0x2D8A40u;
            goto label_2d8a40;
        }
    }
    ctx->pc = 0x2D8A38u;
    // 0x2d8a38: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8A38u;
    SET_GPR_U32(ctx, 31, 0x2D8A40u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8A38u, 0x2D8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A40u;
label_2d8a40:
    // 0x2d8a40: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8A40u;
    {
        const bool branch_taken_0x2d8a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d8a40) {
            ctx->pc = 0x2D8A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8A40u;
            // 0x2d8a44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8a30;
        }
    }
    ctx->pc = 0x2D8A48u;
    // 0x2d8a48: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2d8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2d8a4c:
    // 0x2d8a4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8A4Cu;
    {
        const bool branch_taken_0x2d8a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A4Cu;
        // 0x2d8a50: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a4c) {
            ctx->pc = 0x2D8A60u;
            goto label_2d8a60;
        }
    }
    ctx->pc = 0x2D8A54u;
    // 0x2d8a54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8A54u;
    SET_GPR_U32(ctx, 31, 0x2D8A5Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8A54u, 0x2D8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A5Cu;
label_2d8a5c:
    // 0x2d8a5c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2d8a60:
    // 0x2d8a60: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d8a64: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x2d8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x2d8a68: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2d8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d8a6c: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x2d8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x2d8a70: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x2d8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
label_2d8a74:
    // 0x2d8a74: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x2d8a74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d8a78: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2d8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2d8a7c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8A7Cu;
    {
        const bool branch_taken_0x2d8a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A7Cu;
        // 0x2d8a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a7c) {
            ctx->pc = 0x2D8AA4u;
            goto label_2d8aa4;
        }
    }
    ctx->pc = 0x2D8A84u;
    // 0x2d8a84: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8A84u;
    {
        const bool branch_taken_0x2d8a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a84) {
            ctx->pc = 0x2D8A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8A84u;
            // 0x2d8a88: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8A98u;
            goto label_2d8a98;
        }
    }
    ctx->pc = 0x2D8A8Cu;
    // 0x2d8a8c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d8a90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d8a94: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2d8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2d8a98:
    // 0x2d8a98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8a9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D8A9Cu;
    {
        const bool branch_taken_0x2d8a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A9Cu;
        // 0x2d8aa0: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a9c) {
            ctx->pc = 0x2D8B64u;
            goto label_2d8b64;
        }
    }
    ctx->pc = 0x2D8AA4u;
label_2d8aa4:
    // 0x2d8aa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d8aa8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2d8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2d8aac: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2d8aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2d8ab0: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2d8ab4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2d8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d8ab8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8abc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d8ac0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2d8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2d8ac4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2d8ac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d8ac8: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2d8ac8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2d8acc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d8accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8ad0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d8ad4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8AD4u;
    {
        const bool branch_taken_0x2d8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AD4u;
        // 0x2d8ad8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ad4) {
            ctx->pc = 0x2D8AF0u;
            goto label_2d8af0;
        }
    }
    ctx->pc = 0x2D8ADCu;
    // 0x2d8adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ae0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D8AE0u;
    SET_GPR_U32(ctx, 31, 0x2D8AE8u);
    ctx->pc = 0x2D8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8AE0u;
    // 0x2d8ae4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D8AE0u, 0x2D8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AE8u;
label_2d8ae8:
    // 0x2d8ae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8AE8u;
    {
        const bool branch_taken_0x2d8ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AE8u;
        // 0x2d8aec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ae8) {
            ctx->pc = 0x2D8AF8u;
            goto label_2d8af8;
        }
    }
    ctx->pc = 0x2D8AF0u;
label_2d8af0:
    // 0x2d8af0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d8af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d8af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8af8:
    // 0x2d8af8: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x2d8af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d8afc: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8AFCu;
    {
        const bool branch_taken_0x2d8afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AFCu;
        // 0x2d8b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8afc) {
            ctx->pc = 0x2D8B18u;
            goto label_2d8b18;
        }
    }
    ctx->pc = 0x2D8B04u;
    // 0x2d8b04: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d8b04u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d8b08: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D8B08u;
    SET_GPR_U32(ctx, 31, 0x2D8B10u);
    ctx->pc = 0x2D8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B08u;
    // 0x2d8b0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D8B08u, 0x2D8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B10u;
label_2d8b10:
    // 0x2d8b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8B10u;
    {
        const bool branch_taken_0x2d8b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B10u;
        // 0x2d8b14: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b10) {
            ctx->pc = 0x2D8B1Cu;
            goto label_2d8b1c;
        }
    }
    ctx->pc = 0x2D8B18u;
label_2d8b18:
    // 0x2d8b18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8b1c:
    // 0x2d8b1c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d8b20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8B20u;
    {
        const bool branch_taken_0x2d8b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B20u;
        // 0x2d8b24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b20) {
            ctx->pc = 0x2D8B40u;
            goto label_2d8b40;
        }
    }
    ctx->pc = 0x2D8B28u;
label_2d8b28:
    // 0x2d8b28: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d8b2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8b30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d8b34: 0x0  nop
    ctx->pc = 0x2d8b34u;
    // NOP
    // 0x2d8b38: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8B38u;
    {
        const bool branch_taken_0x2d8b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B38u;
        // 0x2d8b3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b38) {
            ctx->pc = 0x2D8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8b28;
        }
    }
    ctx->pc = 0x2D8B40u;
label_2d8b40:
    // 0x2d8b40: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2d8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d8b44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8B44u;
    {
        const bool branch_taken_0x2d8b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B44u;
        // 0x2d8b48: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b44) {
            ctx->pc = 0x2D8B58u;
            goto label_2d8b58;
        }
    }
    ctx->pc = 0x2D8B4Cu;
    // 0x2d8b4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8B4Cu;
    SET_GPR_U32(ctx, 31, 0x2D8B54u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8B4Cu, 0x2D8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B54u;
label_2d8b54:
    // 0x2d8b54: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2d8b58:
    // 0x2d8b58: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x2d8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    // 0x2d8b5c: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x2d8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
    // 0x2d8b60: 0xaef00004  sw          $s0, 0x4($s7)
    ctx->pc = 0x2d8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 16));
label_2d8b64:
    // 0x2d8b64: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8b68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8B68u;
    {
        const bool branch_taken_0x2d8b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B68u;
        // 0x2d8b6c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b68) {
            ctx->pc = 0x2D8B7Cu;
            goto label_2d8b7c;
        }
    }
    ctx->pc = 0x2D8B70u;
    // 0x2d8b70: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D8B70u;
    SET_GPR_U32(ctx, 31, 0x2D8B78u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D8B70u, 0x2D8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B78u;
label_2d8b78:
    // 0x2d8b78: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8b7c:
    // 0x2d8b7c: 0x8fbe004c  lw          $fp, 0x4C($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d8b80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d8b84: 0x57c2fe82  bnel        $fp, $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x2D8B84u;
    {
        const bool branch_taken_0x2d8b84 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8b84) {
            ctx->pc = 0x2D8B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8B84u;
            // 0x2d8b88: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8590;
        }
    }
    ctx->pc = 0x2D8B8Cu;
label_2d8b8c:
    // 0x2d8b8c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2d8b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8b90: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2d8b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d8b94: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2d8b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8b98: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2d8b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d8b9c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2d8b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8ba0: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2d8ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d8ba4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2d8ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8ba8: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2d8ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d8bac: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2d8bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8bb0: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2d8bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d8bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BB4u;
        // 0x2d8bb8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8BBCu;
    // 0x2d8bbc: 0x0  nop
    ctx->pc = 0x2d8bbcu;
    // NOP
    ctx->pc = 0x2d8bc0u;
}
