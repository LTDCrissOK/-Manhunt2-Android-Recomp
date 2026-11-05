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

// Function: sub_001C3FB8
// Address: 0x1c3fb8 - 0x1c4158
void sub_001C3FB8_0x1c3fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3FB8_0x1c3fb8");
#endif

    switch (ctx->pc) {
        case 0x1c4008u: goto label_1c4008;
        case 0x1c4010u: goto label_1c4010;
        case 0x1c4058u: goto label_1c4058;
        case 0x1c4060u: goto label_1c4060;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40a8u: goto label_1c40a8;
        case 0x1c40d8u: goto label_1c40d8;
        case 0x1c40e0u: goto label_1c40e0;
        case 0x1c410cu: goto label_1c410c;
        case 0x1c411cu: goto label_1c411c;
        default: break;
    }

    ctx->pc = 0x1c3fb8u;

    // 0x1c3fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3fbc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c3fc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c3fc4: 0x24421468  addiu       $v0, $v0, 0x1468
    ctx->pc = 0x1c3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5224));
    // 0x1c3fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3fcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c3fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3fd4: 0x26700478  addiu       $s0, $s3, 0x478
    ctx->pc = 0x1c3fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1144));
    // 0x1c3fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3fdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c3fdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3fe4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c3fe8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c3fec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c3fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c3ff0: 0xae6204c8  sw          $v0, 0x4C8($s3)
    ctx->pc = 0x1c3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1224), GPR_U32(ctx, 2));
    // 0x1c3ff4: 0xae600470  sw          $zero, 0x470($s3)
    ctx->pc = 0x1c3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1136), GPR_U32(ctx, 0));
    // 0x1c3ff8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3FFCu;
    {
        const bool branch_taken_0x1c3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FFCu;
        // 0x1c4000: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ffc) {
            ctx->pc = 0x1C4020u;
            goto label_1c4020;
        }
    }
    ctx->pc = 0x1C4004u;
    // 0x1c4004: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c4008:
    // 0x1c4008: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C4008u;
    SET_GPR_U32(ctx, 31, 0x1C4010u);
    ctx->pc = 0x1C400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4008u;
    // 0x1c400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C4008u, 0x1C4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4010u;
label_1c4010:
    // 0x1c4010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4014: 0x0  nop
    ctx->pc = 0x1c4014u;
    // NOP
    // 0x1c4018: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4018u;
    {
        const bool branch_taken_0x1c4018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4018) {
            ctx->pc = 0x1C401Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4018u;
            // 0x1c401c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4008;
        }
    }
    ctx->pc = 0x1C4020u;
label_1c4020:
    // 0x1c4020: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c4020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c4024: 0x26710488  addiu       $s1, $s3, 0x488
    ctx->pc = 0x1c4024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1160));
    // 0x1c4028: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c4028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c402c: 0x32960001  andi        $s6, $s4, 0x1
    ctx->pc = 0x1c402cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1c4030: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c4030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c4034: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1c4034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4038: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c4038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c403c: 0x267404a0  addiu       $s4, $s3, 0x4A0
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
    // 0x1c4040: 0x26700478  addiu       $s0, $s3, 0x478
    ctx->pc = 0x1c4040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1144));
    // 0x1c4044: 0x26750020  addiu       $s5, $s3, 0x20
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1c4048: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c404c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C404Cu;
    {
        const bool branch_taken_0x1c404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C404Cu;
        // 0x1c4050: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c404c) {
            ctx->pc = 0x1C4070u;
            goto label_1c4070;
        }
    }
    ctx->pc = 0x1C4054u;
    // 0x1c4054: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c4054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c4058:
    // 0x1c4058: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C4058u;
    SET_GPR_U32(ctx, 31, 0x1C4060u);
    ctx->pc = 0x1C405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4058u;
    // 0x1c405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C4058u, 0x1C4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4060u;
label_1c4060:
    // 0x1c4060: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4064: 0x0  nop
    ctx->pc = 0x1c4064u;
    // NOP
    // 0x1c4068: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4068u;
    {
        const bool branch_taken_0x1c4068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4068) {
            ctx->pc = 0x1C406Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4068u;
            // 0x1c406c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4058;
        }
    }
    ctx->pc = 0x1C4070u;
label_1c4070:
    // 0x1c4070: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c4074: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c4074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1c4078: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c4078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c407c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c4080: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c4080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c4084: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c4084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c4088: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1c4088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1c408c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c4090: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4090u;
    {
        const bool branch_taken_0x1c4090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4090u;
        // 0x1c4094: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4090) {
            ctx->pc = 0x1C40B8u;
            goto label_1c40b8;
        }
    }
    ctx->pc = 0x1C4098u;
    // 0x1c4098: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c409c: 0x0  nop
    ctx->pc = 0x1c409cu;
    // NOP
label_1c40a0:
    // 0x1c40a0: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C40A0u;
    SET_GPR_U32(ctx, 31, 0x1C40A8u);
    ctx->pc = 0x1C40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40A0u;
    // 0x1c40a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C40A0u, 0x1C40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40A8u;
label_1c40a8:
    // 0x1c40a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c40ac: 0x0  nop
    ctx->pc = 0x1c40acu;
    // NOP
    // 0x1c40b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C40B0u;
    {
        const bool branch_taken_0x1c40b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c40b0) {
            ctx->pc = 0x1C40B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C40B0u;
            // 0x1c40b4: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C40A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c40a0;
        }
    }
    ctx->pc = 0x1C40B8u;
label_1c40b8:
    // 0x1c40b8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1c40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1c40bc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c40c0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1c40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1c40c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1c40c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1c40c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c40cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C40CCu;
    {
        const bool branch_taken_0x1c40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40CCu;
        // 0x1c40d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40cc) {
            ctx->pc = 0x1C40F0u;
            goto label_1c40f0;
        }
    }
    ctx->pc = 0x1C40D4u;
    // 0x1c40d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c40d8:
    // 0x1c40d8: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C40D8u;
    SET_GPR_U32(ctx, 31, 0x1C40E0u);
    ctx->pc = 0x1C40DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40D8u;
    // 0x1c40dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C40D8u, 0x1C40E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40E0u;
label_1c40e0:
    // 0x1c40e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c40e4: 0x0  nop
    ctx->pc = 0x1c40e4u;
    // NOP
    // 0x1c40e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C40E8u;
    {
        const bool branch_taken_0x1c40e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c40e8) {
            ctx->pc = 0x1C40ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C40E8u;
            // 0x1c40ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C40D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c40d8;
        }
    }
    ctx->pc = 0x1C40F0u;
label_1c40f0:
    // 0x1c40f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c40f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c40fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4100: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c4100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c4104: 0xc06e17e  jal         func_1B85F8
    ctx->pc = 0x1C4104u;
    SET_GPR_U32(ctx, 31, 0x1C410Cu);
    ctx->pc = 0x1C4108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4104u;
    // 0x1c4108: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B85F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B85F8u, 0x1C4104u, 0x1C410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C410Cu;
label_1c410c:
    // 0x1c410c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C410Cu;
    {
        const bool branch_taken_0x1c410c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C410Cu;
        // 0x1c4110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c410c) {
            ctx->pc = 0x1C4120u;
            goto label_1c4120;
        }
    }
    ctx->pc = 0x1C4114u;
    // 0x1c4114: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C4114u;
    SET_GPR_U32(ctx, 31, 0x1C411Cu);
    ctx->pc = 0x1C4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4114u;
    // 0x1c4118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C4114u, 0x1C411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C411Cu;
label_1c411c:
    // 0x1c411c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c411cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4120:
    // 0x1c4120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4128: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c412c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c412cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4130: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c4130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4134: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c4134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4138: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c413c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C413Cu;
        // 0x1c4140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4144u;
    // 0x1c4144: 0x0  nop
    ctx->pc = 0x1c4144u;
    // NOP
    // 0x1c4148: 0x8c621000  lw          $v0, 0x1000($v1)
    ctx->pc = 0x1c4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
    // 0x1c414c: 0x0  nop
    ctx->pc = 0x1c414cu;
    // NOP
    // 0x1c4150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c4154: 0x0  nop
    ctx->pc = 0x1c4154u;
    // NOP
    ctx->pc = 0x1c4158u;
}
