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

// Function: sub_001A4938
// Address: 0x1a4938 - 0x1a4a38
void sub_001A4938_0x1a4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4938_0x1a4938");
#endif

    switch (ctx->pc) {
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        default: break;
    }

    ctx->pc = 0x1a4938u;

label_1a4938:
    // 0x1a4938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a493c:
    // 0x1a493c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a4940:
    // 0x1a4940: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a4940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a4944:
    // 0x1a4944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4948:
    // 0x1a4948: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a4948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a494c:
    // 0x1a494c: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a4950:
    // 0x1a4950: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a4954:
    // 0x1a4954: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a4954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a4958:
    // 0x1a4958: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a495c:
    // 0x1a495c: 0x1051002f  beq         $v0, $s1, . + 4 + (0x2F << 2)
label_1a4960:
    if (ctx->pc == 0x1A4960u) {
        ctx->pc = 0x1A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A495Cu;
        // 0x1a4960: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4964u;
        goto label_1a4964;
    }
    ctx->pc = 0x1A495Cu;
    {
        const bool branch_taken_0x1a495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A495Cu;
        // 0x1a4960: 0xffa50000  sd          $a1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a495c) {
            ctx->pc = 0x1A4A1Cu;
            goto label_1a4a1c;
        }
    }
    ctx->pc = 0x1A4964u;
label_1a4964:
    // 0x1a4964: 0xc0691d6  jal         func_1A4758
label_1a4968:
    if (ctx->pc == 0x1A4968u) {
        ctx->pc = 0x1A496Cu;
        goto label_1a496c;
    }
    ctx->pc = 0x1A4964u;
    SET_GPR_U32(ctx, 31, 0x1A496Cu);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4964u, 0x1A496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A496Cu;
label_1a496c:
    // 0x1a496c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4970:
    // 0x1a4970: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4974:
    if (ctx->pc == 0x1A4974u) {
        ctx->pc = 0x1A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4970u;
        // 0x1a4974: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4978u;
        goto label_1a4978;
    }
    ctx->pc = 0x1A4970u;
    {
        const bool branch_taken_0x1a4970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4970u;
        // 0x1a4974: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4970) {
            ctx->pc = 0x1A4988u;
            goto label_1a4988;
        }
    }
    ctx->pc = 0x1A4978u;
label_1a4978:
    // 0x1a4978: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a497c:
    // 0x1a497c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4980:
    // 0x1a4980: 0x40f809  jalr        $v0
label_1a4984:
    if (ctx->pc == 0x1A4984u) {
        ctx->pc = 0x1A4988u;
        goto label_1a4988;
    }
    ctx->pc = 0x1A4980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4988u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4980u, 0x1A4988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4988u;
label_1a4988:
    // 0x1a4988: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a4988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a498c:
    // 0x1a498c: 0xc061a12  jal         func_186848
label_1a4990:
    if (ctx->pc == 0x1A4990u) {
        ctx->pc = 0x1A4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A498Cu;
        // 0x1a4990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4994u;
        goto label_1a4994;
    }
    ctx->pc = 0x1A498Cu;
    SET_GPR_U32(ctx, 31, 0x1A4994u);
    ctx->pc = 0x1A4990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A498Cu;
    // 0x1a4990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A498Cu, 0x1A4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4994u;
label_1a4994:
    // 0x1a4994: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a4998:
    // 0x1a4998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a499c:
    // 0x1a499c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a49a0:
    // 0x1a49a0: 0x40f809  jalr        $v0
label_1a49a4:
    if (ctx->pc == 0x1A49A4u) {
        ctx->pc = 0x1A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A0u;
        // 0x1a49a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49A8u;
        goto label_1a49a8;
    }
    ctx->pc = 0x1A49A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A49A8u);
        ctx->pc = 0x1A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A0u;
        // 0x1a49a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49A0u, 0x1A49A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49A8u;
label_1a49a8:
    // 0x1a49a8: 0xc061a16  jal         func_186858
label_1a49ac:
    if (ctx->pc == 0x1A49ACu) {
        ctx->pc = 0x1A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A8u;
        // 0x1a49ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49B0u;
        goto label_1a49b0;
    }
    ctx->pc = 0x1A49A8u;
    SET_GPR_U32(ctx, 31, 0x1A49B0u);
    ctx->pc = 0x1A49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49A8u;
    // 0x1a49ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A49A8u, 0x1A49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49B0u;
label_1a49b0:
    // 0x1a49b0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1a49b4:
    // 0x1a49b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a49b8:
    // 0x1a49b8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a49bc:
    // 0x1a49bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a49c0:
    if (ctx->pc == 0x1A49C0u) {
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49BCu;
        // 0x1a49c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49C4u;
        goto label_1a49c4;
    }
    ctx->pc = 0x1A49BCu;
    {
        const bool branch_taken_0x1a49bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49BCu;
        // 0x1a49c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49bc) {
            ctx->pc = 0x1A49D8u;
            goto label_1a49d8;
        }
    }
    ctx->pc = 0x1A49C4u;
label_1a49c4:
    // 0x1a49c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a49c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a49c8:
    // 0x1a49c8: 0x0  nop
    ctx->pc = 0x1a49c8u;
    // NOP
label_1a49cc:
    // 0x1a49cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a49ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a49d0:
    // 0x1a49d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a49d4:
    if (ctx->pc == 0x1A49D4u) {
        ctx->pc = 0x1A49D8u;
        goto label_1a49d8;
    }
    ctx->pc = 0x1A49D0u;
    {
        const bool branch_taken_0x1a49d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a49d0) {
            ctx->pc = 0x1A49F0u;
            goto label_1a49f0;
        }
    }
    ctx->pc = 0x1A49D8u;
label_1a49d8:
    // 0x1a49d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a49d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a49dc:
    // 0x1a49dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a49dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a49e0:
    // 0x1a49e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a49e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a49e4:
    // 0x1a49e4: 0x0  nop
    ctx->pc = 0x1a49e4u;
    // NOP
label_1a49e8:
    // 0x1a49e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a49e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a49ec:
    // 0x1a49ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a49ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a49f0:
    // 0x1a49f0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a49f4:
    // 0x1a49f4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a49f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a49f8:
    // 0x1a49f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a49f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a49fc:
    // 0x1a49fc: 0x0  nop
    ctx->pc = 0x1a49fcu;
    // NOP
label_1a4a00:
    // 0x1a4a00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a4a04:
    // 0x1a4a04: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a4a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a4a08:
    // 0x1a4a08: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a4a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a4a0c:
    // 0x1a4a0c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a4a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a4a10:
    // 0x1a4a10: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a4a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a4a14:
    // 0x1a4a14: 0xb202001b  sdl         $v0, 0x1B($s0)
    ctx->pc = 0x1a4a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4a18:
    // 0x1a4a18: 0xb6020014  sdr         $v0, 0x14($s0)
    ctx->pc = 0x1a4a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4a1c:
    // 0x1a4a1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a4a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4a20:
    // 0x1a4a20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a4a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4a24:
    // 0x1a4a24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4a28:
    // 0x1a4a28: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4a2c:
    // 0x1a4a2c: 0x3e00008  jr          $ra
label_1a4a30:
    if (ctx->pc == 0x1A4A30u) {
        ctx->pc = 0x1A4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A2Cu;
        // 0x1a4a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A34u;
        goto label_1a4a34;
    }
    ctx->pc = 0x1A4A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A2Cu;
        // 0x1a4a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A34u;
label_1a4a34:
    // 0x1a4a34: 0x0  nop
    ctx->pc = 0x1a4a34u;
    // NOP
    ctx->pc = 0x1a4a38u;
}
