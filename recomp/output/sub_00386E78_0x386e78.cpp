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

// Function: sub_00386E78
// Address: 0x386e78 - 0x387038
void sub_00386E78_0x386e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386E78_0x386e78");
#endif

    switch (ctx->pc) {
        case 0x386ee8u: goto label_386ee8;
        case 0x386f18u: goto label_386f18;
        case 0x386f34u: goto label_386f34;
        case 0x386f3cu: goto label_386f3c;
        case 0x386f84u: goto label_386f84;
        case 0x386f98u: goto label_386f98;
        case 0x386facu: goto label_386fac;
        case 0x386fb8u: goto label_386fb8;
        case 0x386fe8u: goto label_386fe8;
        case 0x386ff0u: goto label_386ff0;
        case 0x387014u: goto label_387014;
        case 0x387020u: goto label_387020;
        default: break;
    }

    ctx->pc = 0x386e78u;

    // 0x386e78: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x386e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x386e7c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x386e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x386e80: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x386e80u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x386e84: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x386e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x386e88: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x386e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x386e8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x386e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386e90: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x386e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x386e94: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x386e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x386e98: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x386e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x386e9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x386e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x386ea0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x386ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x386ea4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x386ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x386ea8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x386ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x386eac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x386eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x386eb0: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x386EB0u;
    {
        const bool branch_taken_0x386eb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x386eb0) {
            ctx->pc = 0x386EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386EB0u;
            // 0x386eb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x386EB8u;
            goto label_386eb8;
        }
    }
    ctx->pc = 0x386EB8u;
label_386eb8:
    // 0x386eb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x386eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x386ebc: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x386ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x386ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ec4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x386ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x386ec8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x386ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x386ecc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x386eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x386ed0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x386ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x386ed4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x386ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x386ed8: 0x4012  mflo        $t0
    ctx->pc = 0x386ed8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x386edc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x386edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x386ee0: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x386ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x386ee4: 0x0  nop
    ctx->pc = 0x386ee4u;
    // NOP
label_386ee8:
    // 0x386ee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x386ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x386eec: 0x0  nop
    ctx->pc = 0x386eecu;
    // NOP
    // 0x386ef0: 0x0  nop
    ctx->pc = 0x386ef0u;
    // NOP
    // 0x386ef4: 0x0  nop
    ctx->pc = 0x386ef4u;
    // NOP
    // 0x386ef8: 0x0  nop
    ctx->pc = 0x386ef8u;
    // NOP
    // 0x386efc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x386EFCu;
    {
        const bool branch_taken_0x386efc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x386efc) {
            ctx->pc = 0x386EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386ee8;
        }
    }
    ctx->pc = 0x386F04u;
    // 0x386f04: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x386f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x386f08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x386f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386f0c: 0x24a57510  addiu       $a1, $a1, 0x7510
    ctx->pc = 0x386f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29968));
    // 0x386f10: 0xc0f25b0  jal         func_3C96C0
    ctx->pc = 0x386F10u;
    SET_GPR_U32(ctx, 31, 0x386F18u);
    ctx->pc = 0x386F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F10u;
    // 0x386f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96C0u, 0x386F10u, 0x386F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F18u;
label_386f18:
    // 0x386f18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x386f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386f1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x386f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x386f20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x386f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x386f24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x386f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386f28: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x386f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x386f2c: 0xc0f2938  jal         func_3CA4E0
    ctx->pc = 0x386F2Cu;
    SET_GPR_U32(ctx, 31, 0x386F34u);
    ctx->pc = 0x386F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F2Cu;
    // 0x386f30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA4E0u, 0x386F2Cu, 0x386F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F34u;
label_386f34:
    // 0x386f34: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x386F34u;
    SET_GPR_U32(ctx, 31, 0x386F3Cu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x386F34u, 0x386F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F3Cu;
label_386f3c:
    // 0x386f3c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x386f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x386f40: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x386f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x386f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x386f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x386f48: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x386f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x386f4c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x386f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x386f50: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x386f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x386f54: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x386f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x386f58: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x386f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x386f5c: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x386f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x386f60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x386f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x386f64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x386f64u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x386f68: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x386f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x386f6c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x386f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x386f70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x386f70u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x386f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386F74u;
    {
        const bool branch_taken_0x386f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F74u;
        // 0x386f78: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f74) {
            ctx->pc = 0x386F88u;
            goto label_386f88;
        }
    }
    ctx->pc = 0x386F7Cu;
    // 0x386f7c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x386F7Cu;
    SET_GPR_U32(ctx, 31, 0x386F84u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x386F7Cu, 0x386F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F84u;
label_386f84:
    // 0x386f84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x386f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_386f88:
    // 0x386f88: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x386f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x386f8c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x386f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x386f90: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x386f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x386f94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x386f94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
label_386f98:
    // 0x386f98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x386f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x386f9c: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x386f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x386fa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x386fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386fa4: 0xc0e180e  jal         func_386038
    ctx->pc = 0x386FA4u;
    SET_GPR_U32(ctx, 31, 0x386FACu);
    ctx->pc = 0x386FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386FA4u;
    // 0x386fa8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x386FA4u, 0x386FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FACu;
label_386fac:
    // 0x386fac: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x386facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x386fb0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x386fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386fb4: 0x0  nop
    ctx->pc = 0x386fb4u;
    // NOP
label_386fb8:
    // 0x386fb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x386fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386fbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x386fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386fc0: 0x0  nop
    ctx->pc = 0x386fc0u;
    // NOP
    // 0x386fc4: 0x0  nop
    ctx->pc = 0x386fc4u;
    // NOP
    // 0x386fc8: 0x0  nop
    ctx->pc = 0x386fc8u;
    // NOP
    // 0x386fcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x386FCCu;
    {
        const bool branch_taken_0x386fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386fcc) {
            ctx->pc = 0x386FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386fb8;
        }
    }
    ctx->pc = 0x386FD4u;
    // 0x386fd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386FD4u;
    {
        const bool branch_taken_0x386fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FD4u;
        // 0x386fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fd4) {
            ctx->pc = 0x386FE8u;
            goto label_386fe8;
        }
    }
    ctx->pc = 0x386FDCu;
    // 0x386fdc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x386fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x386fe0: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x386FE0u;
    SET_GPR_U32(ctx, 31, 0x386FE8u);
    ctx->pc = 0x386FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386FE0u;
    // 0x386fe4: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x386FE0u, 0x386FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FE8u;
label_386fe8:
    // 0x386fe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x386fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x386fec: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x386fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_386ff0:
    // 0x386ff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x386ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x386ff4: 0x0  nop
    ctx->pc = 0x386ff4u;
    // NOP
    // 0x386ff8: 0x0  nop
    ctx->pc = 0x386ff8u;
    // NOP
    // 0x386ffc: 0x0  nop
    ctx->pc = 0x386ffcu;
    // NOP
    // 0x387000: 0x0  nop
    ctx->pc = 0x387000u;
    // NOP
    // 0x387004: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x387004u;
    {
        const bool branch_taken_0x387004 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x387004) {
            ctx->pc = 0x386FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386ff0;
        }
    }
    ctx->pc = 0x38700Cu;
    // 0x38700c: 0xc0f291e  jal         func_3CA478
    ctx->pc = 0x38700Cu;
    SET_GPR_U32(ctx, 31, 0x387014u);
    ctx->pc = 0x387010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38700Cu;
    // 0x387010: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA478u, 0x38700Cu, 0x387014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387014u;
label_387014:
    // 0x387014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x387014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387018: 0xc0f25b4  jal         func_3C96D0
    ctx->pc = 0x387018u;
    SET_GPR_U32(ctx, 31, 0x387020u);
    ctx->pc = 0x38701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387018u;
    // 0x38701c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96D0u, 0x387018u, 0x387020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387020u;
label_387020:
    // 0x387020: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x387020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387024: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x387024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x387028: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x387028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38702c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x38702cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387030: 0x3e00008  jr          $ra
    ctx->pc = 0x387030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387030u;
        // 0x387034: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387038u;
}
