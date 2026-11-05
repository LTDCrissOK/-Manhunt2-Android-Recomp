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

// Function: sub_00194818
// Address: 0x194818 - 0x194a70
void sub_00194818_0x194818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194818_0x194818");
#endif

    switch (ctx->pc) {
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        default: break;
    }

    ctx->pc = 0x194818u;

label_194818:
    // 0x194818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x194818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19481c:
    // 0x19481c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194820:
    // 0x194820: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x194820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_194824:
    // 0x194824: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x194824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_194828:
    // 0x194828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19482c:
    // 0x19482c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_194830:
    // 0x194830: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x194830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_194834:
    // 0x194834: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x194834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_194838:
    // 0x194838: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x194838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_19483c:
    // 0x19483c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_194840:
    // 0x194840: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x194840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_194844:
    // 0x194844: 0x10430080  beq         $v0, $v1, . + 4 + (0x80 << 2)
label_194848:
    if (ctx->pc == 0x194848u) {
        ctx->pc = 0x194848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194844u;
        // 0x194848: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19484Cu;
        goto label_19484c;
    }
    ctx->pc = 0x194844u;
    {
        const bool branch_taken_0x194844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x194848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194844u;
        // 0x194848: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194844) {
            ctx->pc = 0x194A48u;
            goto label_194a48;
        }
    }
    ctx->pc = 0x19484Cu;
label_19484c:
    // 0x19484c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_194850:
    // 0x194850: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194854:
    if (ctx->pc == 0x194854u) {
        ctx->pc = 0x194854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194850u;
        // 0x194854: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194858u;
        goto label_194858;
    }
    ctx->pc = 0x194850u;
    {
        const bool branch_taken_0x194850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194850u;
        // 0x194854: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194850) {
            ctx->pc = 0x194868u;
            goto label_194868;
        }
    }
    ctx->pc = 0x194858u;
label_194858:
    // 0x194858: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x194858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19485c:
    // 0x19485c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194860:
    // 0x194860: 0x40f809  jalr        $v0
label_194864:
    if (ctx->pc == 0x194864u) {
        ctx->pc = 0x194868u;
        goto label_194868;
    }
    ctx->pc = 0x194860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194868u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194860u, 0x194868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194868u;
label_194868:
    // 0x194868: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x194868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19486c:
    // 0x19486c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x19486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_194870:
    // 0x194870: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x194870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_194874:
    // 0x194874: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194878:
    // 0x194878: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_19487c:
    if (ctx->pc == 0x19487Cu) {
        ctx->pc = 0x19487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194878u;
        // 0x19487c: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194880u;
        goto label_194880;
    }
    ctx->pc = 0x194878u;
    {
        const bool branch_taken_0x194878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194878u;
        // 0x19487c: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194878) {
            ctx->pc = 0x194954u;
            goto label_194954;
        }
    }
    ctx->pc = 0x194880u;
label_194880:
    // 0x194880: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_194884:
    // 0x194884: 0x2470efc8  addiu       $s0, $v1, -0x1038
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963144));
label_194888:
    // 0x194888: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x194888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19488c:
    // 0x19488c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194890:
    // 0x194890: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_194894:
    if (ctx->pc == 0x194894u) {
        ctx->pc = 0x194894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194890u;
        // 0x194894: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194898u;
        goto label_194898;
    }
    ctx->pc = 0x194890u;
    {
        const bool branch_taken_0x194890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194890u;
        // 0x194894: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194890) {
            ctx->pc = 0x1948B8u;
            goto label_1948b8;
        }
    }
    ctx->pc = 0x194898u;
label_194898:
    // 0x194898: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x194898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19489c:
    // 0x19489c: 0x0  nop
    ctx->pc = 0x19489cu;
    // NOP
label_1948a0:
    // 0x1948a0: 0xc0f6ec0  jal         func_3DBB00
label_1948a4:
    if (ctx->pc == 0x1948A4u) {
        ctx->pc = 0x1948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A0u;
        // 0x1948a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948A8u;
        goto label_1948a8;
    }
    ctx->pc = 0x1948A0u;
    SET_GPR_U32(ctx, 31, 0x1948A8u);
    ctx->pc = 0x1948A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948A0u;
    // 0x1948a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x1948A0u, 0x1948A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1948A8u;
label_1948a8:
    // 0x1948a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1948ac:
    // 0x1948ac: 0x0  nop
    ctx->pc = 0x1948acu;
    // NOP
label_1948b0:
    // 0x1948b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1948b4:
    if (ctx->pc == 0x1948B4u) {
        ctx->pc = 0x1948B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948B0u;
        // 0x1948b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948B8u;
        goto label_1948b8;
    }
    ctx->pc = 0x1948B0u;
    {
        const bool branch_taken_0x1948b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1948b0) {
            ctx->pc = 0x1948B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1948B0u;
            // 0x1948b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1948A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1948a0;
        }
    }
    ctx->pc = 0x1948B8u;
label_1948b8:
    // 0x1948b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1948bc:
    // 0x1948bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1948bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1948c0:
    // 0x1948c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1948c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1948c4:
    // 0x1948c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1948c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1948c8:
    // 0x1948c8: 0xc061a12  jal         func_186848
label_1948cc:
    if (ctx->pc == 0x1948CCu) {
        ctx->pc = 0x1948CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948C8u;
        // 0x1948cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948D0u;
        goto label_1948d0;
    }
    ctx->pc = 0x1948C8u;
    SET_GPR_U32(ctx, 31, 0x1948D0u);
    ctx->pc = 0x1948CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948C8u;
    // 0x1948cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1948C8u, 0x1948D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1948D0u;
label_1948d0:
    // 0x1948d0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1948d4:
    // 0x1948d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1948d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1948d8:
    // 0x1948d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1948d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1948dc:
    // 0x1948dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1948dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1948e0:
    // 0x1948e0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1948e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1948e4:
    // 0x1948e4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1948e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1948e8:
    // 0x1948e8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1948e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1948ec:
    // 0x1948ec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1948ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1948f0:
    // 0x1948f0: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x1948f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1948f4:
    // 0x1948f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1948f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1948f8:
    // 0x1948f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1948f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1948fc:
    // 0x1948fc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1948fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_194900:
    // 0x194900: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x194900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_194904:
    // 0x194904: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194908:
    // 0x194908: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x194908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19490c:
    // 0x19490c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19490cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_194910:
    // 0x194910: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x194910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_194914:
    // 0x194914: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x194914u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_194918:
    // 0x194918: 0x4a0003bf  vwaitq
    ctx->pc = 0x194918u;
    // VWAITQ (Q already resolved in this runtime)
label_19491c:
    // 0x19491c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19491cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_194920:
    // 0x194920: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_194924:
    // 0x194924: 0xc095368  jal         func_254DA0
label_194928:
    if (ctx->pc == 0x194928u) {
        ctx->pc = 0x194928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194924u;
        // 0x194928: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19492Cu;
        goto label_19492c;
    }
    ctx->pc = 0x194924u;
    SET_GPR_U32(ctx, 31, 0x19492Cu);
    ctx->pc = 0x194928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194924u;
    // 0x194928: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x194924u, 0x19492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19492Cu;
label_19492c:
    // 0x19492c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194930:
    // 0x194930: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x194930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_194934:
    // 0x194934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194938:
    // 0x194938: 0x3c01be33  lui         $at, 0xBE33
    ctx->pc = 0x194938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48691 << 16));
label_19493c:
    // 0x19493c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19493cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_194940:
    // 0x194940: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x194940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_194944:
    // 0x194944: 0x2687efc8  addiu       $a3, $s4, -0x1038
    ctx->pc = 0x194944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963144));
label_194948:
    // 0x194948: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x194948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19494c:
    // 0x19494c: 0xc0416a2  jal         func_105A88
label_194950:
    if (ctx->pc == 0x194950u) {
        ctx->pc = 0x194950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19494Cu;
        // 0x194950: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194954u;
        goto label_194954;
    }
    ctx->pc = 0x19494Cu;
    SET_GPR_U32(ctx, 31, 0x194954u);
    ctx->pc = 0x194950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19494Cu;
    // 0x194950: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A88u, 0x19494Cu, 0x194954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194954u;
label_194954:
    // 0x194954: 0xc061a12  jal         func_186848
label_194958:
    if (ctx->pc == 0x194958u) {
        ctx->pc = 0x194958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194954u;
        // 0x194958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19495Cu;
        goto label_19495c;
    }
    ctx->pc = 0x194954u;
    SET_GPR_U32(ctx, 31, 0x19495Cu);
    ctx->pc = 0x194958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194954u;
    // 0x194958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194954u, 0x19495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19495Cu;
label_19495c:
    // 0x19495c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194960:
    // 0x194960: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194964:
    // 0x194964: 0xc07023a  jal         func_1C08E8
label_194968:
    if (ctx->pc == 0x194968u) {
        ctx->pc = 0x194968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194964u;
        // 0x194968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19496Cu;
        goto label_19496c;
    }
    ctx->pc = 0x194964u;
    SET_GPR_U32(ctx, 31, 0x19496Cu);
    ctx->pc = 0x194968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194964u;
    // 0x194968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x194964u, 0x19496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19496Cu;
label_19496c:
    // 0x19496c: 0xc061a12  jal         func_186848
label_194970:
    if (ctx->pc == 0x194970u) {
        ctx->pc = 0x194970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19496Cu;
        // 0x194970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194974u;
        goto label_194974;
    }
    ctx->pc = 0x19496Cu;
    SET_GPR_U32(ctx, 31, 0x194974u);
    ctx->pc = 0x194970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19496Cu;
    // 0x194970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19496Cu, 0x194974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194974u;
label_194974:
    // 0x194974: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x194974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_194978:
    // 0x194978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19497c:
    // 0x19497c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x19497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_194980:
    // 0x194980: 0x40f809  jalr        $v0
label_194984:
    if (ctx->pc == 0x194984u) {
        ctx->pc = 0x194988u;
        goto label_194988;
    }
    ctx->pc = 0x194980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194988u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194980u, 0x194988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194988u;
label_194988:
    // 0x194988: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x194988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_19498c:
    // 0x19498c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_194990:
    if (ctx->pc == 0x194990u) {
        ctx->pc = 0x194994u;
        goto label_194994;
    }
    ctx->pc = 0x19498Cu;
    {
        const bool branch_taken_0x19498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19498c) {
            ctx->pc = 0x1949A0u;
            goto label_1949a0;
        }
    }
    ctx->pc = 0x194994u;
label_194994:
    // 0x194994: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x194994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_194998:
    // 0x194998: 0xc041924  jal         func_106490
label_19499c:
    if (ctx->pc == 0x19499Cu) {
        ctx->pc = 0x19499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194998u;
        // 0x19499c: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949A0u;
        goto label_1949a0;
    }
    ctx->pc = 0x194998u;
    SET_GPR_U32(ctx, 31, 0x1949A0u);
    ctx->pc = 0x19499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194998u;
    // 0x19499c: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106490u, 0x194998u, 0x1949A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949A0u;
label_1949a0:
    // 0x1949a0: 0xc061a16  jal         func_186858
label_1949a4:
    if (ctx->pc == 0x1949A4u) {
        ctx->pc = 0x1949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A0u;
        // 0x1949a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949A8u;
        goto label_1949a8;
    }
    ctx->pc = 0x1949A0u;
    SET_GPR_U32(ctx, 31, 0x1949A8u);
    ctx->pc = 0x1949A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949A0u;
    // 0x1949a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1949A0u, 0x1949A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949A8u;
label_1949a8:
    // 0x1949a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1949a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1949ac:
    // 0x1949ac: 0xc061a16  jal         func_186858
label_1949b0:
    if (ctx->pc == 0x1949B0u) {
        ctx->pc = 0x1949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949ACu;
        // 0x1949b0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949B4u;
        goto label_1949b4;
    }
    ctx->pc = 0x1949ACu;
    SET_GPR_U32(ctx, 31, 0x1949B4u);
    ctx->pc = 0x1949B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949ACu;
    // 0x1949b0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1949ACu, 0x1949B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949B4u;
label_1949b4:
    // 0x1949b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1949b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1949b8:
    // 0x1949b8: 0xc061a16  jal         func_186858
label_1949bc:
    if (ctx->pc == 0x1949BCu) {
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B8u;
        // 0x1949bc: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949C0u;
        goto label_1949c0;
    }
    ctx->pc = 0x1949B8u;
    SET_GPR_U32(ctx, 31, 0x1949C0u);
    ctx->pc = 0x1949BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949B8u;
    // 0x1949bc: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1949B8u, 0x1949C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949C0u;
label_1949c0:
    // 0x1949c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1949c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1949c4:
    // 0x1949c4: 0xc06ee66  jal         func_1BB998
label_1949c8:
    if (ctx->pc == 0x1949C8u) {
        ctx->pc = 0x1949C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C4u;
        // 0x1949c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949CCu;
        goto label_1949cc;
    }
    ctx->pc = 0x1949C4u;
    SET_GPR_U32(ctx, 31, 0x1949CCu);
    ctx->pc = 0x1949C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949C4u;
    // 0x1949c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1949C4u, 0x1949CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949CCu;
label_1949cc:
    // 0x1949cc: 0xc061a16  jal         func_186858
label_1949d0:
    if (ctx->pc == 0x1949D0u) {
        ctx->pc = 0x1949D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949CCu;
        // 0x1949d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949D4u;
        goto label_1949d4;
    }
    ctx->pc = 0x1949CCu;
    SET_GPR_U32(ctx, 31, 0x1949D4u);
    ctx->pc = 0x1949D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949CCu;
    // 0x1949d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1949CCu, 0x1949D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949D4u;
label_1949d4:
    // 0x1949d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1949d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1949d8:
    // 0x1949d8: 0xc06eebe  jal         func_1BBAF8
label_1949dc:
    if (ctx->pc == 0x1949DCu) {
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949E0u;
        goto label_1949e0;
    }
    ctx->pc = 0x1949D8u;
    SET_GPR_U32(ctx, 31, 0x1949E0u);
    ctx->pc = 0x1949DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949D8u;
    // 0x1949dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1949D8u, 0x1949E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949E0u;
label_1949e0:
    // 0x1949e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1949e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1949e4:
    // 0x1949e4: 0xc0655f6  jal         func_1957D8
label_1949e8:
    if (ctx->pc == 0x1949E8u) {
        ctx->pc = 0x1949E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949E4u;
        // 0x1949e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949ECu;
        goto label_1949ec;
    }
    ctx->pc = 0x1949E4u;
    SET_GPR_U32(ctx, 31, 0x1949ECu);
    ctx->pc = 0x1949E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949E4u;
    // 0x1949e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1957D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1957D8u, 0x1949E4u, 0x1949ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949ECu;
label_1949ec:
    // 0x1949ec: 0x8ea22b00  lw          $v0, 0x2B00($s5)
    ctx->pc = 0x1949ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11008)));
label_1949f0:
    // 0x1949f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1949f4:
    if (ctx->pc == 0x1949F4u) {
        ctx->pc = 0x1949F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949F0u;
        // 0x1949f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949F8u;
        goto label_1949f8;
    }
    ctx->pc = 0x1949F0u;
    {
        const bool branch_taken_0x1949f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1949F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949F0u;
        // 0x1949f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949f0) {
            ctx->pc = 0x194A0Cu;
            goto label_194a0c;
        }
    }
    ctx->pc = 0x1949F8u;
label_1949f8:
    // 0x1949f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1949f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1949fc:
    // 0x1949fc: 0x0  nop
    ctx->pc = 0x1949fcu;
    // NOP
label_194a00:
    // 0x194a00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x194a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_194a04:
    // 0x194a04: 0x10000007  b           . + 4 + (0x7 << 2)
label_194a08:
    if (ctx->pc == 0x194A08u) {
        ctx->pc = 0x194A0Cu;
        goto label_194a0c;
    }
    ctx->pc = 0x194A04u;
    {
        const bool branch_taken_0x194a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a04) {
            ctx->pc = 0x194A24u;
            goto label_194a24;
        }
    }
    ctx->pc = 0x194A0Cu;
label_194a0c:
    // 0x194a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_194a10:
    // 0x194a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_194a14:
    // 0x194a14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x194a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_194a18:
    // 0x194a18: 0x0  nop
    ctx->pc = 0x194a18u;
    // NOP
label_194a1c:
    // 0x194a1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x194a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_194a20:
    // 0x194a20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x194a20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_194a24:
    // 0x194a24: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_194a28:
    // 0x194a28: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x194a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_194a2c:
    // 0x194a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194a30:
    // 0x194a30: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x194a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_194a34:
    // 0x194a34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x194a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_194a38:
    // 0x194a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194a3c:
    // 0x194a3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x194a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_194a40:
    // 0x194a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x194a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_194a44:
    // 0x194a44: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x194a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_194a48:
    // 0x194a48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x194a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194a4c:
    // 0x194a4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x194a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_194a50:
    // 0x194a50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x194a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194a54:
    // 0x194a54: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x194a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_194a58:
    // 0x194a58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x194a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194a5c:
    // 0x194a5c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x194a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_194a60:
    // 0x194a60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_194a64:
    // 0x194a64: 0x3e00008  jr          $ra
label_194a68:
    if (ctx->pc == 0x194A68u) {
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A6Cu;
        goto label_194a6c;
    }
    ctx->pc = 0x194A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194A6Cu;
label_194a6c:
    // 0x194a6c: 0x0  nop
    ctx->pc = 0x194a6cu;
    // NOP
    ctx->pc = 0x194a70u;
}
