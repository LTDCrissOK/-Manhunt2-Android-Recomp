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

// Function: sub_001F5E90
// Address: 0x1f5e90 - 0x1f6650
void sub_001F5E90_0x1f5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5E90_0x1f5e90");
#endif

    switch (ctx->pc) {
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f6328u: goto label_1f6328;
        case 0x1f633cu: goto label_1f633c;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6390u: goto label_1f6390;
        case 0x1f6424u: goto label_1f6424;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f649cu: goto label_1f649c;
        case 0x1f6534u: goto label_1f6534;
        default: break;
    }

    ctx->pc = 0x1f5e90u;

    // 0x1f5e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f5e94: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f5e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f5e98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f5e9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ea0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f5ea4: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x1f5ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1f5ea8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f5eac: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1f5eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5eb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f5eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f5eb4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f5eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5eb8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f5eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1f5ebc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f5ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1f5ec0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f5ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1f5ec4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1f5ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1f5ec8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1f5ecc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f5eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f5ed0:
    // 0x1f5ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ed4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5ED4u;
    SET_GPR_U32(ctx, 31, 0x1F5EDCu);
    ctx->pc = 0x1F5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED4u;
    // 0x1f5ed8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5ED4u, 0x1F5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EDCu;
label_1f5edc:
    // 0x1f5edc: 0x0  nop
    ctx->pc = 0x1f5edcu;
    // NOP
    // 0x1f5ee0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5EE0u;
    {
        const bool branch_taken_0x1f5ee0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EE0u;
        // 0x1f5ee4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ee0) {
            ctx->pc = 0x1F5ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5ed0;
        }
    }
    ctx->pc = 0x1F5EE8u;
    // 0x1f5ee8: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x1f5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1f5eec: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1F5EECu;
    SET_GPR_U32(ctx, 31, 0x1F5EF4u);
    ctx->pc = 0x1F5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5EECu;
    // 0x1f5ef0: 0x267735b0  addiu       $s7, $s3, 0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 13744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1F5EECu, 0x1F5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EF4u;
label_1f5ef4:
    // 0x1f5ef4: 0x26767ba0  addiu       $s6, $s3, 0x7BA0
    ctx->pc = 0x1f5ef4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 31648));
    // 0x1f5ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5f00: 0x266200e0  addiu       $v0, $s3, 0xE0
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1f5f04: 0xae6000e0  sw          $zero, 0xE0($s3)
    ctx->pc = 0x1f5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 0));
    // 0x1f5f08: 0x26634f98  addiu       $v1, $s3, 0x4F98
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20376));
    // 0x1f5f0c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f5f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f5f10: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x1f5f14: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f5f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f5f18: 0x267e7ab4  addiu       $fp, $s3, 0x7AB4
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 31412));
    // 0x1f5f1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5f20: 0x26637718  addiu       $v1, $s3, 0x7718
    ctx->pc = 0x1f5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 30488));
    // 0x1f5f24: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f5f28: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5f2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F34u);
    ctx->pc = 0x1F5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F2Cu;
    // 0x1f5f30: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5F2Cu, 0x1F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F34u;
label_1f5f34:
    // 0x1f5f34: 0x26640190  addiu       $a0, $s3, 0x190
    ctx->pc = 0x1f5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x1f5f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f3c: 0x0  nop
    ctx->pc = 0x1f5f3cu;
    // NOP
label_1f5f40:
    // 0x1f5f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f44: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5f48: 0x261219e0  addiu       $s2, $s0, 0x19E0
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 6624));
    // 0x1f5f4c: 0x2411002d  addiu       $s1, $zero, 0x2D
    ctx->pc = 0x1f5f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1f5f50:
    // 0x1f5f50: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1f5f54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5F54u;
    SET_GPR_U32(ctx, 31, 0x1F5F5Cu);
    ctx->pc = 0x1F5F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F54u;
    // 0x1f5f58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5F54u, 0x1F5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F5Cu;
label_1f5f5c:
    // 0x1f5f5c: 0x0  nop
    ctx->pc = 0x1f5f5cu;
    // NOP
    // 0x1f5f60: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5F60u;
    {
        const bool branch_taken_0x1f5f60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1F5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F60u;
        // 0x1f5f64: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f60) {
            ctx->pc = 0x1F5F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5f50;
        }
    }
    ctx->pc = 0x1F5F68u;
    // 0x1f5f68: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1f5f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f6c: 0x1455fff4  bne         $v0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F5F6Cu;
    {
        const bool branch_taken_0x1f5f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1F5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F6Cu;
        // 0x1f5f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f6c) {
            ctx->pc = 0x1F5F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5f40;
        }
    }
    ctx->pc = 0x1F5F74u;
    // 0x1f5f74: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1f5f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f78: 0x2411002d  addiu       $s1, $zero, 0x2D
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1f5f7c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5f80:
    // 0x1f5f80: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1f5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1f5f84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5F84u;
    SET_GPR_U32(ctx, 31, 0x1F5F8Cu);
    ctx->pc = 0x1F5F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F84u;
    // 0x1f5f88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5F84u, 0x1F5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F8Cu;
label_1f5f8c:
    // 0x1f5f8c: 0x0  nop
    ctx->pc = 0x1f5f8cu;
    // NOP
    // 0x1f5f90: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5F90u;
    {
        const bool branch_taken_0x1f5f90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F90u;
        // 0x1f5f94: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f90) {
            ctx->pc = 0x1F5F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5f80;
        }
    }
    ctx->pc = 0x1F5F98u;
    // 0x1f5f98: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1f5f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f9c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f5fa0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5fa4: 0x0  nop
    ctx->pc = 0x1f5fa4u;
    // NOP
label_1f5fa8:
    // 0x1f5fa8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f5fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f5fac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5FACu;
    SET_GPR_U32(ctx, 31, 0x1F5FB4u);
    ctx->pc = 0x1F5FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FACu;
    // 0x1f5fb0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5FACu, 0x1F5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FB4u;
label_1f5fb4:
    // 0x1f5fb4: 0xc0f75f0  jal         func_3DD7C0
    ctx->pc = 0x1F5FB4u;
    SET_GPR_U32(ctx, 31, 0x1F5FBCu);
    ctx->pc = 0x1F5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FB4u;
    // 0x1f5fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD7C0u, 0x1F5FB4u, 0x1F5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FBCu;
label_1f5fbc:
    // 0x1f5fbc: 0x1632fffa  bne         $s1, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5FBCu;
    {
        const bool branch_taken_0x1f5fbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fbc) {
            ctx->pc = 0x1F5FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5fa8;
        }
    }
    ctx->pc = 0x1F5FC4u;
    // 0x1f5fc4: 0x26d00280  addiu       $s0, $s6, 0x280
    ctx->pc = 0x1f5fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 640));
    // 0x1f5fc8: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1f5fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f5fcc: 0x26d50510  addiu       $s5, $s6, 0x510
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 1296));
    // 0x1f5fd0: 0x26d20530  addiu       $s2, $s6, 0x530
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1328));
    // 0x1f5fd4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1f5fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5fd8:
    // 0x1f5fd8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f5fdc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5FDCu;
    SET_GPR_U32(ctx, 31, 0x1F5FE4u);
    ctx->pc = 0x1F5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FDCu;
    // 0x1f5fe0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5FDCu, 0x1F5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE4u;
label_1f5fe4:
    // 0x1f5fe4: 0xc0f75f0  jal         func_3DD7C0
    ctx->pc = 0x1F5FE4u;
    SET_GPR_U32(ctx, 31, 0x1F5FECu);
    ctx->pc = 0x1F5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE4u;
    // 0x1f5fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD7C0u, 0x1F5FE4u, 0x1F5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FECu;
label_1f5fec:
    // 0x1f5fec: 0x1634fffa  bne         $s1, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5FECu;
    {
        const bool branch_taken_0x1f5fec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FECu;
        // 0x1f5ff0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fec) {
            ctx->pc = 0x1F5FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5fd8;
        }
    }
    ctx->pc = 0x1F5FF4u;
    // 0x1f5ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ff8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F5FF8u;
    SET_GPR_U32(ctx, 31, 0x1F6000u);
    ctx->pc = 0x1F5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FF8u;
    // 0x1f5ffc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F5FF8u, 0x1F6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6000u;
label_1f6000:
    // 0x1f6000: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f6004: 0xc0f75f0  jal         func_3DD7C0
    ctx->pc = 0x1F6004u;
    SET_GPR_U32(ctx, 31, 0x1F600Cu);
    ctx->pc = 0x1F6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6004u;
    // 0x1f6008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD7C0u, 0x1F6004u, 0x1F600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F600Cu;
label_1f600c:
    // 0x1f600c: 0xc0f75fc  jal         func_3DD7F0
    ctx->pc = 0x1F600Cu;
    SET_GPR_U32(ctx, 31, 0x1F6014u);
    ctx->pc = 0x1F6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F600Cu;
    // 0x1f6010: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD7F0u, 0x1F600Cu, 0x1F6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6014u;
label_1f6014:
    // 0x1f6014: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1f6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1f6018: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1f6018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f601c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6020:
    // 0x1f6020: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1f6020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1f6024: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1F6024u;
    SET_GPR_U32(ctx, 31, 0x1F602Cu);
    ctx->pc = 0x1F6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6024u;
    // 0x1f6028: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1F6024u, 0x1F602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F602Cu;
label_1f602c:
    // 0x1f602c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F602Cu;
    SET_GPR_U32(ctx, 31, 0x1F6034u);
    ctx->pc = 0x1F6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F602Cu;
    // 0x1f6030: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F602Cu, 0x1F6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6034u;
label_1f6034:
    // 0x1f6034: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1F6034u;
    SET_GPR_U32(ctx, 31, 0x1F603Cu);
    ctx->pc = 0x1F6038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6034u;
    // 0x1f6038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1F6034u, 0x1F603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F603Cu;
label_1f603c:
    // 0x1f603c: 0x1654fff8  bne         $s2, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F603Cu;
    {
        const bool branch_taken_0x1f603c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F603Cu;
        // 0x1f6040: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f603c) {
            ctx->pc = 0x1F6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6020;
        }
    }
    ctx->pc = 0x1F6044u;
    // 0x1f6044: 0x26240298  addiu       $a0, $s1, 0x298
    ctx->pc = 0x1f6044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x1f6048: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1F6048u;
    SET_GPR_U32(ctx, 31, 0x1F6050u);
    ctx->pc = 0x1F604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6048u;
    // 0x1f604c: 0x26300290  addiu       $s0, $s1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1F6048u, 0x1F6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6050u;
label_1f6050:
    // 0x1f6050: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x1f6050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f6054: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x1f6058: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6058u;
    SET_GPR_U32(ctx, 31, 0x1F6060u);
    ctx->pc = 0x1F605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6058u;
    // 0x1f605c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6058u, 0x1F6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6060u;
label_1f6060:
    // 0x1f6060: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1F6060u;
    SET_GPR_U32(ctx, 31, 0x1F6068u);
    ctx->pc = 0x1F6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6060u;
    // 0x1f6064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1F6060u, 0x1F6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6068u;
label_1f6068:
    // 0x1f6068: 0xc07ed16  jal         func_1FB458
    ctx->pc = 0x1F6068u;
    SET_GPR_U32(ctx, 31, 0x1F6070u);
    ctx->pc = 0x1F606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6068u;
    // 0x1f606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB458u, 0x1F6068u, 0x1F6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6070u;
label_1f6070:
    // 0x1f6070: 0x340483d0  ori         $a0, $zero, 0x83D0
    ctx->pc = 0x1f6070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33744);
    // 0x1f6074: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6074u;
    SET_GPR_U32(ctx, 31, 0x1F607Cu);
    ctx->pc = 0x1F6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6074u;
    // 0x1f6078: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6074u, 0x1F607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F607Cu;
label_1f607c:
    // 0x1f607c: 0x34028420  ori         $v0, $zero, 0x8420
    ctx->pc = 0x1f607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1f6080: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f6084: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f6084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6088:
    // 0x1f6088: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f6088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f608c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F608Cu;
    SET_GPR_U32(ctx, 31, 0x1F6094u);
    ctx->pc = 0x1F6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F608Cu;
    // 0x1f6090: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F608Cu, 0x1F6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6094u;
label_1f6094:
    // 0x1f6094: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1F6094u;
    SET_GPR_U32(ctx, 31, 0x1F609Cu);
    ctx->pc = 0x1F6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6094u;
    // 0x1f6098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1F6094u, 0x1F609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F609Cu;
label_1f609c:
    // 0x1f609c: 0x1654fffa  bne         $s2, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F609Cu;
    {
        const bool branch_taken_0x1f609c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F609Cu;
        // 0x1f60a0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f609c) {
            ctx->pc = 0x1F6088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F60A4u;
    // 0x1f60a4: 0x26240990  addiu       $a0, $s1, 0x990
    ctx->pc = 0x1f60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x1f60a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F60A8u;
    SET_GPR_U32(ctx, 31, 0x1F60B0u);
    ctx->pc = 0x1F60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60A8u;
    // 0x1f60ac: 0x26300970  addiu       $s0, $s1, 0x970 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F60A8u, 0x1F60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60B0u;
label_1f60b0:
    // 0x1f60b0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f60b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f60b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60b8: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1F60B8u;
    SET_GPR_U32(ctx, 31, 0x1F60C0u);
    ctx->pc = 0x1F60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60B8u;
    // 0x1f60bc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1F60B8u, 0x1F60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60C0u;
label_1f60c0:
    // 0x1f60c0: 0xc07ac4c  jal         func_1EB130
    ctx->pc = 0x1F60C0u;
    SET_GPR_U32(ctx, 31, 0x1F60C8u);
    ctx->pc = 0x1F60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60C0u;
    // 0x1f60c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB130u, 0x1F60C0u, 0x1F60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60C8u;
label_1f60c8:
    // 0x1f60c8: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1f60c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1f60cc: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f60d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f60d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60d4: 0x0  nop
    ctx->pc = 0x1f60d4u;
    // NOP
label_1f60d8:
    // 0x1f60d8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f60dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F60DCu;
    SET_GPR_U32(ctx, 31, 0x1F60E4u);
    ctx->pc = 0x1F60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60DCu;
    // 0x1f60e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F60DCu, 0x1F60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60E4u;
label_1f60e4:
    // 0x1f60e4: 0xc07e85c  jal         func_1FA170
    ctx->pc = 0x1F60E4u;
    SET_GPR_U32(ctx, 31, 0x1F60ECu);
    ctx->pc = 0x1F60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60E4u;
    // 0x1f60e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1F60E4u, 0x1F60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60ECu;
label_1f60ec:
    // 0x1f60ec: 0x1654fffa  bne         $s2, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F60ECu;
    {
        const bool branch_taken_0x1f60ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60ECu;
        // 0x1f60f0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60ec) {
            ctx->pc = 0x1F60D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f60d8;
        }
    }
    ctx->pc = 0x1F60F4u;
    // 0x1f60f4: 0x26240530  addiu       $a0, $s1, 0x530
    ctx->pc = 0x1f60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1328));
    // 0x1f60f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F60F8u;
    SET_GPR_U32(ctx, 31, 0x1F6100u);
    ctx->pc = 0x1F60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60F8u;
    // 0x1f60fc: 0x26300510  addiu       $s0, $s1, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F60F8u, 0x1F6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6100u;
label_1f6100:
    // 0x1f6100: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6108: 0xc07e85c  jal         func_1FA170
    ctx->pc = 0x1F6108u;
    SET_GPR_U32(ctx, 31, 0x1F6110u);
    ctx->pc = 0x1F610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6108u;
    // 0x1f610c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1F6108u, 0x1F6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6110u;
label_1f6110:
    // 0x1f6110: 0xc07e8bc  jal         func_1FA2F0
    ctx->pc = 0x1F6110u;
    SET_GPR_U32(ctx, 31, 0x1F6118u);
    ctx->pc = 0x1F6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6110u;
    // 0x1f6114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2F0u, 0x1F6110u, 0x1F6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6118u;
label_1f6118:
    // 0x1f6118: 0x34049540  ori         $a0, $zero, 0x9540
    ctx->pc = 0x1f6118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
    // 0x1f611c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F611Cu;
    SET_GPR_U32(ctx, 31, 0x1F6124u);
    ctx->pc = 0x1F6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F611Cu;
    // 0x1f6120: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F611Cu, 0x1F6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6124u;
label_1f6124:
    // 0x1f6124: 0x34049550  ori         $a0, $zero, 0x9550
    ctx->pc = 0x1f6124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
    // 0x1f6128: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6128u;
    SET_GPR_U32(ctx, 31, 0x1F6130u);
    ctx->pc = 0x1F612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6128u;
    // 0x1f612c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6128u, 0x1F6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6130u;
label_1f6130:
    // 0x1f6130: 0x34049560  ori         $a0, $zero, 0x9560
    ctx->pc = 0x1f6130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
    // 0x1f6134: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6134u;
    SET_GPR_U32(ctx, 31, 0x1F613Cu);
    ctx->pc = 0x1F6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6134u;
    // 0x1f6138: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6134u, 0x1F613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F613Cu;
label_1f613c:
    // 0x1f613c: 0x34029570  ori         $v0, $zero, 0x9570
    ctx->pc = 0x1f613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1f6140: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f6144: 0x0  nop
    ctx->pc = 0x1f6144u;
    // NOP
label_1f6148:
    // 0x1f6148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f614c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F614Cu;
    SET_GPR_U32(ctx, 31, 0x1F6154u);
    ctx->pc = 0x1F6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F614Cu;
    // 0x1f6150: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F614Cu, 0x1F6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6154u;
label_1f6154:
    // 0x1f6154: 0x0  nop
    ctx->pc = 0x1f6154u;
    // NOP
    // 0x1f6158: 0x1654fffb  bne         $s2, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6158u;
    {
        const bool branch_taken_0x1f6158 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6158u;
        // 0x1f615c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6158) {
            ctx->pc = 0x1F6148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6148;
        }
    }
    ctx->pc = 0x1F6160u;
    // 0x1f6160: 0x34029590  ori         $v0, $zero, 0x9590
    ctx->pc = 0x1f6160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38288);
    // 0x1f6164: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f6164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6168: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1f6168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f616c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f616cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6170:
    // 0x1f6170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6174: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6174u;
    SET_GPR_U32(ctx, 31, 0x1F617Cu);
    ctx->pc = 0x1F6178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6174u;
    // 0x1f6178: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6174u, 0x1F617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F617Cu;
label_1f617c:
    // 0x1f617c: 0x0  nop
    ctx->pc = 0x1f617cu;
    // NOP
    // 0x1f6180: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6180u;
    {
        const bool branch_taken_0x1f6180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6180u;
        // 0x1f6184: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6180) {
            ctx->pc = 0x1F6170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6170;
        }
    }
    ctx->pc = 0x1F6188u;
    // 0x1f6188: 0x340495b0  ori         $a0, $zero, 0x95B0
    ctx->pc = 0x1f6188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38320);
    // 0x1f618c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f618cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6190: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F6190u;
    SET_GPR_U32(ctx, 31, 0x1F6198u);
    ctx->pc = 0x1F6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6190u;
    // 0x1f6194: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F6190u, 0x1F6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6198u;
label_1f6198:
    // 0x1f6198: 0x3c014136  lui         $at, 0x4136
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16694 << 16));
    // 0x1f619c: 0x3421eef0  ori         $at, $at, 0xEEF0
    ctx->pc = 0x1f619cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61168);
    // 0x1f61a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f61a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f61a4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1f61a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f61a8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f61ac: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1f61acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1f61b0: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1f61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1f61b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f61b8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1f61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1f61bc: 0xa08215e0  sb          $v0, 0x15E0($a0)
    ctx->pc = 0x1f61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5600), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f61c0: 0xa2630180  sb          $v1, 0x180($s3)
    ctx->pc = 0x1f61c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 384), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f61c4: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F61C4u;
    SET_GPR_U32(ctx, 31, 0x1F61CCu);
    ctx->pc = 0x1F61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61C4u;
    // 0x1f61c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F61C4u, 0x1F61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61CCu;
label_1f61cc:
    // 0x1f61cc: 0xa2600180  sb          $zero, 0x180($s3)
    ctx->pc = 0x1f61ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f61d0: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F61D0u;
    SET_GPR_U32(ctx, 31, 0x1F61D8u);
    ctx->pc = 0x1F61D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61D0u;
    // 0x1f61d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F61D0u, 0x1F61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61D8u;
label_1f61d8:
    // 0x1f61d8: 0xc07e59a  jal         func_1F9668
    ctx->pc = 0x1F61D8u;
    SET_GPR_U32(ctx, 31, 0x1F61E0u);
    ctx->pc = 0x1F61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61D8u;
    // 0x1f61dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9668u, 0x1F61D8u, 0x1F61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61E0u;
label_1f61e0:
    // 0x1f61e0: 0xc07e5aa  jal         func_1F96A8
    ctx->pc = 0x1F61E0u;
    SET_GPR_U32(ctx, 31, 0x1F61E8u);
    ctx->pc = 0x1F61E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61E0u;
    // 0x1f61e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F96A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F96A8u, 0x1F61E0u, 0x1F61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61E8u;
label_1f61e8:
    // 0x1f61e8: 0xa2600014  sb          $zero, 0x14($s3)
    ctx->pc = 0x1f61e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f61ec: 0xc07e604  jal         func_1F9810
    ctx->pc = 0x1F61ECu;
    SET_GPR_U32(ctx, 31, 0x1F61F4u);
    ctx->pc = 0x1F61F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61ECu;
    // 0x1f61f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9810u, 0x1F61ECu, 0x1F61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61F4u;
label_1f61f4:
    // 0x1f61f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f61f8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1f61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1f61fc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1f61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1f6200: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6204: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1f6204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1f6208: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1f620c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6210:
    // 0x1f6210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f6210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f6214: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1f6218: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f6218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1f621c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f621cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f6220: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1f6220u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6224: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f6228: 0x2e8200e6  sltiu       $v0, $s4, 0xE6
    ctx->pc = 0x1f6228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
    // 0x1f622c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F622Cu;
    {
        const bool branch_taken_0x1f622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F622Cu;
        // 0x1f6230: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f622c) {
            ctx->pc = 0x1F6210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6210;
        }
    }
    ctx->pc = 0x1F6234u;
    // 0x1f6234: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1f6234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6238: 0xae607ab0  sw          $zero, 0x7AB0($s3)
    ctx->pc = 0x1f6238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31408), GPR_U32(ctx, 0));
    // 0x1f623c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1f623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1f6240: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f6240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f6244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6248: 0xac8015f0  sw          $zero, 0x15F0($a0)
    ctx->pc = 0x1f6248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5616), GPR_U32(ctx, 0));
    // 0x1f624c: 0x34039550  ori         $v1, $zero, 0x9550
    ctx->pc = 0x1f624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
    // 0x1f6250: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f6250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1f6254: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f6258: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x1f6258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x1f625c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1f625cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x1f6260: 0xac80134c  sw          $zero, 0x134C($a0)
    ctx->pc = 0x1f6260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4940), GPR_U32(ctx, 0));
    // 0x1f6264: 0xac801350  sw          $zero, 0x1350($a0)
    ctx->pc = 0x1f6264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4944), GPR_U32(ctx, 0));
    // 0x1f6268: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f626c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f6270: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f6270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f6274: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f6274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f6278: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f6278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f627c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f627cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6280: 0x34029560  ori         $v0, $zero, 0x9560
    ctx->pc = 0x1f6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
    // 0x1f6284: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f6284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f6288: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f6288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f628c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6290: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f6290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f6294: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f6294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f6298: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f6298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f629c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f629cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f62a0: 0x340294d8  ori         $v0, $zero, 0x94D8
    ctx->pc = 0x1f62a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38104);
    // 0x1f62a4: 0xac8013e4  sw          $zero, 0x13E4($a0)
    ctx->pc = 0x1f62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5092), GPR_U32(ctx, 0));
    // 0x1f62a8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f62ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f62acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62b0:
    // 0x1f62b0: 0xac60ff10  sw          $zero, -0xF0($v1)
    ctx->pc = 0x1f62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967056), GPR_U32(ctx, 0));
    // 0x1f62b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f62b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f62b8: 0xac60ff60  sw          $zero, -0xA0($v1)
    ctx->pc = 0x1f62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967136), GPR_U32(ctx, 0));
    // 0x1f62bc: 0x2e82000a  sltiu       $v0, $s4, 0xA
    ctx->pc = 0x1f62bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f62c0: 0xac60ffb0  sw          $zero, -0x50($v1)
    ctx->pc = 0x1f62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967216), GPR_U32(ctx, 0));
    // 0x1f62c4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f62c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f62c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F62C8u;
    {
        const bool branch_taken_0x1f62c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62C8u;
        // 0x1f62cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62c8) {
            ctx->pc = 0x1F62B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f62b0;
        }
    }
    ctx->pc = 0x1F62D0u;
    // 0x1f62d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f62d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f62d4: 0x3403935c  ori         $v1, $zero, 0x935C
    ctx->pc = 0x1f62d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37724);
    // 0x1f62d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f62dc: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x1f62dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f62e0: 0xa04013cc  sb          $zero, 0x13CC($v0)
    ctx->pc = 0x1f62e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5068), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f62e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f62e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f62e8: 0xac401528  sw          $zero, 0x1528($v0)
    ctx->pc = 0x1f62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5416), GPR_U32(ctx, 0));
    // 0x1f62ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f62f0: 0xac401354  sw          $zero, 0x1354($v0)
    ctx->pc = 0x1f62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 0));
    // 0x1f62f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1f62f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f62f8: 0xac40152c  sw          $zero, 0x152C($v0)
    ctx->pc = 0x1f62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5420), GPR_U32(ctx, 0));
    // 0x1f62fc: 0xac401530  sw          $zero, 0x1530($v0)
    ctx->pc = 0x1f62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5424), GPR_U32(ctx, 0));
    // 0x1f6300: 0xac401534  sw          $zero, 0x1534($v0)
    ctx->pc = 0x1f6300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5428), GPR_U32(ctx, 0));
    // 0x1f6304: 0xac401538  sw          $zero, 0x1538($v0)
    ctx->pc = 0x1f6304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5432), GPR_U32(ctx, 0));
    // 0x1f6308: 0xa04013c8  sb          $zero, 0x13C8($v0)
    ctx->pc = 0x1f6308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5064), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f630c: 0xa04013c9  sb          $zero, 0x13C9($v0)
    ctx->pc = 0x1f630cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5065), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6310: 0xac4013d0  sw          $zero, 0x13D0($v0)
    ctx->pc = 0x1f6310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5072), GPR_U32(ctx, 0));
    // 0x1f6314: 0xac401358  sw          $zero, 0x1358($v0)
    ctx->pc = 0x1f6314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4952), GPR_U32(ctx, 0));
    // 0x1f6318: 0xa04013ca  sb          $zero, 0x13CA($v0)
    ctx->pc = 0x1f6318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5066), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f631c: 0xa04013cb  sb          $zero, 0x13CB($v0)
    ctx->pc = 0x1f631cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5067), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6320: 0xac4013d4  sw          $zero, 0x13D4($v0)
    ctx->pc = 0x1f6320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5076), GPR_U32(ctx, 0));
    // 0x1f6324: 0xac4013d8  sw          $zero, 0x13D8($v0)
    ctx->pc = 0x1f6324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5080), GPR_U32(ctx, 0));
label_1f6328:
    // 0x1f6328: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1f6328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1f632c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6334: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1F6334u;
    SET_GPR_U32(ctx, 31, 0x1F633Cu);
    ctx->pc = 0x1F6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6334u;
    // 0x1f6338: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1F6334u, 0x1F633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F633Cu;
label_1f633c:
    // 0x1f633c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f633cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f6340: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x1f6340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f6344: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F6344u;
    {
        const bool branch_taken_0x1f6344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6344u;
        // 0x1f6348: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6344) {
            ctx->pc = 0x1F6328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6328;
        }
    }
    ctx->pc = 0x1F634Cu;
    // 0x1f634c: 0x34039370  ori         $v1, $zero, 0x9370
    ctx->pc = 0x1f634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37744);
    // 0x1f6350: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6354: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x1f6354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f6358: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f6358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f635c: 0x34039590  ori         $v1, $zero, 0x9590
    ctx->pc = 0x1f635cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38288);
    // 0x1f6360: 0xa04013cd  sb          $zero, 0x13CD($v0)
    ctx->pc = 0x1f6360u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5069), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6364: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f6368: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f6368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f636c: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f6370: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f6370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6374: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f6374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6378: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1f6378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f637c: 0x0  nop
    ctx->pc = 0x1f637cu;
    // NOP
label_1f6380:
    // 0x1f6380: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x1f6380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x1f6384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6388: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1F6388u;
    SET_GPR_U32(ctx, 31, 0x1F6390u);
    ctx->pc = 0x1F638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6388u;
    // 0x1f638c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1F6388u, 0x1F6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6390u;
label_1f6390:
    // 0x1f6390: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6394: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1f6394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f6398: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f6398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f639c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f63a0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f63a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f63a4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f63a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f63a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f63ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1f63acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1f63b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f63b4: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x1f63b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f63b8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F63B8u;
    {
        const bool branch_taken_0x1f63b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63B8u;
        // 0x1f63bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63b8) {
            ctx->pc = 0x1F6380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6380;
        }
    }
    ctx->pc = 0x1F63C0u;
    // 0x1f63c0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1f63c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f63c4: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f63c8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f63cc: 0x340383d0  ori         $v1, $zero, 0x83D0
    ctx->pc = 0x1f63ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33744);
    // 0x1f63d0: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x1f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    // 0x1f63d4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f63d8: 0xae0203e0  sw          $v0, 0x3E0($s0)
    ctx->pc = 0x1f63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 2));
    // 0x1f63dc: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1f63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1f63e0: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1f63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1f63e4: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1f63e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x1f63e8: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1f63e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x1f63ec: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1f63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1f63f0: 0xae0003ec  sw          $zero, 0x3EC($s0)
    ctx->pc = 0x1f63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 0));
    // 0x1f63f4: 0x340583fc  ori         $a1, $zero, 0x83FC
    ctx->pc = 0x1f63f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
    // 0x1f63f8: 0xa20003f0  sb          $zero, 0x3F0($s0)
    ctx->pc = 0x1f63f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1008), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f63fc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1f6400: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x1f6400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
    // 0x1f6404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6408: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x1f6408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x1f640c: 0x241e35e3  addiu       $fp, $zero, 0x35E3
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f6410: 0xae0003fc  sw          $zero, 0x3FC($s0)
    ctx->pc = 0x1f6410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
    // 0x1f6414: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f6414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6418: 0x26121390  addiu       $s2, $s0, 0x1390
    ctx->pc = 0x1f6418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5008));
    // 0x1f641c: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1F641Cu;
    SET_GPR_U32(ctx, 31, 0x1F6424u);
    ctx->pc = 0x1F6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F641Cu;
    // 0x1f6420: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1F641Cu, 0x1F6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6424u;
label_1f6424:
    // 0x1f6424: 0x34029388  ori         $v0, $zero, 0x9388
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37768);
    // 0x1f6428: 0x34039570  ori         $v1, $zero, 0x9570
    ctx->pc = 0x1f6428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1f642c: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f6430: 0xa200040c  sb          $zero, 0x40C($s0)
    ctx->pc = 0x1f6430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1036), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6434: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x1f6434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x1f6438: 0x263b021  addu        $s6, $s3, $v1
    ctx->pc = 0x1f6438u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f643c: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x1f643cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x1f6440: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1f6440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6444: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x1f6444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
label_1f6448:
    // 0x1f6448: 0xae3e0020  sw          $fp, 0x20($s1)
    ctx->pc = 0x1f6448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 30));
    // 0x1f644c: 0xae20fff0  sw          $zero, -0x10($s1)
    ctx->pc = 0x1f644cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_U32(ctx, 0));
    // 0x1f6450: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6454: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6458: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f6458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f645c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f6460: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f6460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6464: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1f6464u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6468: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1f6468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1f646c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1f646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1f6470: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1f6470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1f6474: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f6474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6478: 0xae40fff0  sw          $zero, -0x10($s2)
    ctx->pc = 0x1f6478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), GPR_U32(ctx, 0));
    // 0x1f647c: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1f6480: 0xae570000  sw          $s7, 0x0($s2)
    ctx->pc = 0x1f6480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x1f6484: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f6484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f6488: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x1f6488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x1f648c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1f648cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1f6490: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1f6494: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1F6494u;
    SET_GPR_U32(ctx, 31, 0x1F649Cu);
    ctx->pc = 0x1F6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6494u;
    // 0x1f6498: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1F6494u, 0x1F649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F649Cu;
label_1f649c:
    // 0x1f649c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x1f649cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f64a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1F64A0u;
    {
        const bool branch_taken_0x1f64a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64A0u;
        // 0x1f64a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64a0) {
            ctx->pc = 0x1F6448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6448;
        }
    }
    ctx->pc = 0x1F64A8u;
    // 0x1f64a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f64ac: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f64acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f64b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f64b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f64b4: 0xa2620169  sb          $v0, 0x169($s3)
    ctx->pc = 0x1f64b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 361), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f64b8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1f64b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f64bc: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f64c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f64c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f64c4: 0xae0015e4  sw          $zero, 0x15E4($s0)
    ctx->pc = 0x1f64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5604), GPR_U32(ctx, 0));
    // 0x1f64c8: 0x340395b0  ori         $v1, $zero, 0x95B0
    ctx->pc = 0x1f64c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38320);
    // 0x1f64cc: 0xae0013a0  sw          $zero, 0x13A0($s0)
    ctx->pc = 0x1f64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5024), GPR_U32(ctx, 0));
    // 0x1f64d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f64d4: 0xae001398  sw          $zero, 0x1398($s0)
    ctx->pc = 0x1f64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5016), GPR_U32(ctx, 0));
    // 0x1f64d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f64d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f64dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f64e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f64e4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f64e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f64e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f64ec: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f64f0: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f64f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f64f8: 0xae0213dc  sw          $v0, 0x13DC($s0)
    ctx->pc = 0x1f64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5084), GPR_U32(ctx, 2));
    // 0x1f64fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f64fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6500: 0xae0313e0  sw          $v1, 0x13E0($s0)
    ctx->pc = 0x1f6500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5088), GPR_U32(ctx, 3));
    // 0x1f6504: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f6508: 0xae0013c0  sw          $zero, 0x13C0($s0)
    ctx->pc = 0x1f6508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5056), GPR_U32(ctx, 0));
    // 0x1f650c: 0xae0013c4  sw          $zero, 0x13C4($s0)
    ctx->pc = 0x1f650cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5060), GPR_U32(ctx, 0));
    // 0x1f6510: 0xae00139c  sw          $zero, 0x139C($s0)
    ctx->pc = 0x1f6510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 0));
    // 0x1f6514: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6518: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f6518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f651c: 0xae660080  sw          $a2, 0x80($s3)
    ctx->pc = 0x1f651cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
    // 0x1f6520: 0xe614161c  swc1        $f20, 0x161C($s0)
    ctx->pc = 0x1f6520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5660), bits); }
    // 0x1f6524: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1f6528: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f6528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f652c: 0xc07d6e8  jal         func_1F5BA0
    ctx->pc = 0x1F652Cu;
    SET_GPR_U32(ctx, 31, 0x1F6534u);
    ctx->pc = 0x1F6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F652Cu;
    // 0x1f6530: 0xae001620  sw          $zero, 0x1620($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5664), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BA0u, 0x1F652Cu, 0x1F6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6534u;
label_1f6534:
    // 0x1f6534: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1f6538: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f653c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f653cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6540: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f6540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f6544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6548: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f6548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f654c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f654cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f6550: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f6550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f6554: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1f6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6558: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f6558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f655c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f655cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f6560: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1f6564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f6564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f6568: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f6568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f656c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1f6570: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f6570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f6574: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f6574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x1f6578: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f6578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1f657c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f657cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f6580: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
    // 0x1f6584: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1f6584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1f6588: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1f6588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f658c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1f6590: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f6590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f6594: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1f6594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f6598: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1f659c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f659cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f65a0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1f65a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f65a4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1f65a8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f65a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1f65ac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1f65acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f65b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f65b4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1f65b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1f65b8: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x1f65b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x1f65bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f65bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f65c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f65c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f65c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f65c8: 0xe6141624  swc1        $f20, 0x1624($s0)
    ctx->pc = 0x1f65c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5668), bits); }
    // 0x1f65cc: 0xe6001670  swc1        $f0, 0x1670($s0)
    ctx->pc = 0x1f65ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5744), bits); }
    // 0x1f65d0: 0xe6031628  swc1        $f3, 0x1628($s0)
    ctx->pc = 0x1f65d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5672), bits); }
    // 0x1f65d4: 0xe6041630  swc1        $f4, 0x1630($s0)
    ctx->pc = 0x1f65d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5680), bits); }
    // 0x1f65d8: 0xe6051634  swc1        $f5, 0x1634($s0)
    ctx->pc = 0x1f65d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5684), bits); }
    // 0x1f65dc: 0xe6061638  swc1        $f6, 0x1638($s0)
    ctx->pc = 0x1f65dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5688), bits); }
    // 0x1f65e0: 0xe607163c  swc1        $f7, 0x163C($s0)
    ctx->pc = 0x1f65e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5692), bits); }
    // 0x1f65e4: 0xe6021648  swc1        $f2, 0x1648($s0)
    ctx->pc = 0x1f65e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5704), bits); }
    // 0x1f65e8: 0xe6081650  swc1        $f8, 0x1650($s0)
    ctx->pc = 0x1f65e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5712), bits); }
    // 0x1f65ec: 0xe6091654  swc1        $f9, 0x1654($s0)
    ctx->pc = 0x1f65ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5716), bits); }
    // 0x1f65f0: 0xe6011658  swc1        $f1, 0x1658($s0)
    ctx->pc = 0x1f65f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5720), bits); }
    // 0x1f65f4: 0xe60a165c  swc1        $f10, 0x165C($s0)
    ctx->pc = 0x1f65f4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5724), bits); }
    // 0x1f65f8: 0xe60b1660  swc1        $f11, 0x1660($s0)
    ctx->pc = 0x1f65f8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5728), bits); }
    // 0x1f65fc: 0xe60d1664  swc1        $f13, 0x1664($s0)
    ctx->pc = 0x1f65fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5732), bits); }
    // 0x1f6600: 0xe60c166c  swc1        $f12, 0x166C($s0)
    ctx->pc = 0x1f6600u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5740), bits); }
    // 0x1f6604: 0xe602162c  swc1        $f2, 0x162C($s0)
    ctx->pc = 0x1f6604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5676), bits); }
    // 0x1f6608: 0xe6011668  swc1        $f1, 0x1668($s0)
    ctx->pc = 0x1f6608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5736), bits); }
    // 0x1f660c: 0xe60d1640  swc1        $f13, 0x1640($s0)
    ctx->pc = 0x1f660cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5696), bits); }
    // 0x1f6610: 0xe6021644  swc1        $f2, 0x1644($s0)
    ctx->pc = 0x1f6610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5700), bits); }
    // 0x1f6614: 0xe601164c  swc1        $f1, 0x164C($s0)
    ctx->pc = 0x1f6614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5708), bits); }
    // 0x1f6618: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f6618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f661c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f661cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6620: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f6620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6624: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f6624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6628: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f6628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f662c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f662cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6630: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f6630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f6634: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f6634u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f6638: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1f6638u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f663c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f663cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6640: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f6644: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6644u;
        // 0x1f6648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F664Cu;
    // 0x1f664c: 0x0  nop
    ctx->pc = 0x1f664cu;
    // NOP
    ctx->pc = 0x1f6650u;
}
