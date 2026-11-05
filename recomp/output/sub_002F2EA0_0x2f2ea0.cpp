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

// Function: sub_002F2EA0
// Address: 0x2f2ea0 - 0x2f31a8
void sub_002F2EA0_0x2f2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2EA0_0x2f2ea0");
#endif

    switch (ctx->pc) {
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f5cu: goto label_2f2f5c;
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f315cu: goto label_2f315c;
        default: break;
    }

    ctx->pc = 0x2f2ea0u;

    // 0x2f2ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f2ea4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f2ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f2eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f2eb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f2ebc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f2ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f2ec0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2f2ec4: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x2f2ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2ec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f2ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2ecc: 0x0  nop
    ctx->pc = 0x2f2eccu;
    // NOP
    // 0x2f2ed0: 0x450100ac  bc1t        . + 4 + (0xAC << 2)
    ctx->pc = 0x2F2ED0u;
    {
        const bool branch_taken_0x2f2ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ED0u;
        // 0x2f2ed4: 0x8e3200b8  lw          $s2, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ed0) {
            ctx->pc = 0x2F3184u;
            goto label_2f3184;
        }
    }
    ctx->pc = 0x2F2ED8u;
    // 0x2f2ed8: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f2ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2edc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2ee0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f2ee4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2ee8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2EE8u;
    {
        const bool branch_taken_0x2f2ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EE8u;
        // 0x2f2eec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ee8) {
            ctx->pc = 0x2F2F24u;
            goto label_2f2f24;
        }
    }
    ctx->pc = 0x2F2EF0u;
    // 0x2f2ef0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f2ef4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2EF4u;
    {
        const bool branch_taken_0x2f2ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2ef4) {
            ctx->pc = 0x2F2EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2EF4u;
            // 0x2f2ef8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2EFCu;
    // 0x2f2efc: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F2EFCu;
    SET_GPR_U32(ctx, 31, 0x2F2F04u);
    ctx->pc = 0x2F2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EFCu;
    // 0x2f2f00: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F2EFCu, 0x2F2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F04u;
label_2f2f04:
    // 0x2f2f04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2F04u;
    {
        const bool branch_taken_0x2f2f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f04) {
            ctx->pc = 0x2F2F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F04u;
            // 0x2f2f08: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2F0Cu;
    // 0x2f2f0c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2f10: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f2f14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2F14u;
    {
        const bool branch_taken_0x2f2f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F14u;
        // 0x2f2f18: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f14) {
            ctx->pc = 0x2F2F24u;
            goto label_2f2f24;
        }
    }
    ctx->pc = 0x2F2F1Cu;
    // 0x2f2f1c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2F1Cu;
    {
        const bool branch_taken_0x2f2f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2f1c) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2F24u;
label_2f2f24:
    // 0x2f2f24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f28:
    // 0x2f2f28: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F2F28u;
    {
        const bool branch_taken_0x2f2f28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F28u;
        // 0x2f2f2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f28) {
            ctx->pc = 0x2F2FC8u;
            goto label_2f2fc8;
        }
    }
    ctx->pc = 0x2F2F30u;
    // 0x2f2f30: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2f34: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2f38: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f2f3c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2f40: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2F40u;
    {
        const bool branch_taken_0x2f2f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F40u;
        // 0x2f2f44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f40) {
            ctx->pc = 0x2F2F7Cu;
            goto label_2f2f7c;
        }
    }
    ctx->pc = 0x2F2F48u;
    // 0x2f2f48: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f2f4c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2F4Cu;
    {
        const bool branch_taken_0x2f2f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2f4c) {
            ctx->pc = 0x2F2F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F4Cu;
            // 0x2f2f50: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F80u;
            goto label_2f2f80;
        }
    }
    ctx->pc = 0x2F2F54u;
    // 0x2f2f54: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F2F54u;
    SET_GPR_U32(ctx, 31, 0x2F2F5Cu);
    ctx->pc = 0x2F2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F54u;
    // 0x2f2f58: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F2F54u, 0x2F2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F5Cu;
label_2f2f5c:
    // 0x2f2f5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2F5Cu;
    {
        const bool branch_taken_0x2f2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f5c) {
            ctx->pc = 0x2F2F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F5Cu;
            // 0x2f2f60: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F80u;
            goto label_2f2f80;
        }
    }
    ctx->pc = 0x2F2F64u;
    // 0x2f2f64: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2f68: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f2f6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2F6Cu;
    {
        const bool branch_taken_0x2f2f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F6Cu;
        // 0x2f2f70: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f6c) {
            ctx->pc = 0x2F2F7Cu;
            goto label_2f2f7c;
        }
    }
    ctx->pc = 0x2F2F74u;
    // 0x2f2f74: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2F74u;
    {
        const bool branch_taken_0x2f2f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2f74) {
            ctx->pc = 0x2F2F80u;
            goto label_2f2f80;
        }
    }
    ctx->pc = 0x2F2F7Cu;
label_2f2f7c:
    // 0x2f2f7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f80:
    // 0x2f2f80: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2F80u;
    {
        const bool branch_taken_0x2f2f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f80) {
            ctx->pc = 0x2F2FA0u;
            goto label_2f2fa0;
        }
    }
    ctx->pc = 0x2F2F88u;
    // 0x2f2f88: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f2f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f2f90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f2f94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2f98: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2f2f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x2f2f9c: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x2f2f9cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f2fa0:
    // 0x2f2fa0: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2FA0u;
    {
        const bool branch_taken_0x2f2fa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fa0) {
            ctx->pc = 0x2F2FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2FA0u;
            // 0x2f2fa4: 0xc6431578  lwc1        $f3, 0x1578($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FCCu;
            goto label_2f2fcc;
        }
    }
    ctx->pc = 0x2F2FA8u;
    // 0x2f2fa8: 0x8e2211cc  lw          $v0, 0x11CC($s1)
    ctx->pc = 0x2f2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4556)));
    // 0x2f2fac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2FACu;
    {
        const bool branch_taken_0x2f2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fac) {
            ctx->pc = 0x2F2FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2FACu;
            // 0x2f2fb0: 0xc6431574  lwc1        $f3, 0x1574($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FCCu;
            goto label_2f2fcc;
        }
    }
    ctx->pc = 0x2F2FB4u;
    // 0x2f2fb4: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x2f2fb8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2FB8u;
    {
        const bool branch_taken_0x2f2fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fb8) {
            ctx->pc = 0x2F2FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2FB8u;
            // 0x2f2fbc: 0xc6431578  lwc1        $f3, 0x1578($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FCCu;
            goto label_2f2fcc;
        }
    }
    ctx->pc = 0x2F2FC0u;
    // 0x2f2fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2FC0u;
    {
        const bool branch_taken_0x2f2fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FC0u;
        // 0x2f2fc4: 0xc6431574  lwc1        $f3, 0x1574($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fc0) {
            ctx->pc = 0x2F2FCCu;
            goto label_2f2fcc;
        }
    }
    ctx->pc = 0x2F2FC8u;
label_2f2fc8:
    // 0x2f2fc8: 0xc643157c  lwc1        $f3, 0x157C($s2)
    ctx->pc = 0x2f2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f2fcc:
    // 0x2f2fcc: 0xc6211294  lwc1        $f1, 0x1294($s1)
    ctx->pc = 0x2f2fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f2fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2fd4: 0x0  nop
    ctx->pc = 0x2f2fd4u;
    // NOP
    // 0x2f2fd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f2fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2fdc: 0x0  nop
    ctx->pc = 0x2f2fdcu;
    // NOP
    // 0x2f2fe0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2FE0u;
    {
        const bool branch_taken_0x2f2fe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FE0u;
        // 0x2f2fe4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fe0) {
            ctx->pc = 0x2F2FF8u;
            goto label_2f2ff8;
        }
    }
    ctx->pc = 0x2F2FE8u;
    // 0x2f2fe8: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2f2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2fec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f2fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f2ff0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2F2FF0u;
    {
        const bool branch_taken_0x2f2ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FF0u;
        // 0x2f2ff4: 0xe6201294  swc1        $f0, 0x1294($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ff0) {
            ctx->pc = 0x2F315Cu;
            goto label_2f315c;
        }
    }
    ctx->pc = 0x2F2FF8u;
label_2f2ff8:
    // 0x2f2ff8: 0xc62111c8  lwc1        $f1, 0x11C8($s1)
    ctx->pc = 0x2f2ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f3000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f3004: 0x0  nop
    ctx->pc = 0x2f3004u;
    // NOP
    // 0x2f3008: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f3008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f300c: 0x0  nop
    ctx->pc = 0x2f300cu;
    // NOP
    // 0x2f3010: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2F3010u;
    {
        const bool branch_taken_0x2f3010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3010) {
            ctx->pc = 0x2F3014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3010u;
            // 0x2f3014: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3044u;
            goto label_2f3044;
        }
    }
    ctx->pc = 0x2F3018u;
    // 0x2f3018: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2f3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f301c: 0x0  nop
    ctx->pc = 0x2f301cu;
    // NOP
    // 0x2f3020: 0x0  nop
    ctx->pc = 0x2f3020u;
    // NOP
    // 0x2f3024: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f3024u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2f3028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f302c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f302cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3030: 0x0  nop
    ctx->pc = 0x2f3030u;
    // NOP
    // 0x2f3034: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3034u;
    {
        const bool branch_taken_0x2f3034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3034u;
        // 0x2f3038: 0xe62011c8  swc1        $f0, 0x11C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3034) {
            ctx->pc = 0x2F3040u;
            goto label_2f3040;
        }
    }
    ctx->pc = 0x2F303Cu;
    // 0x2f303c: 0xe62211c8  swc1        $f2, 0x11C8($s1)
    ctx->pc = 0x2f303cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4552), bits); }
label_2f3040:
    // 0x2f3040: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2f3040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2f3044:
    // 0x2f3044: 0x8c43ebc4  lw          $v1, -0x143C($v0)
    ctx->pc = 0x2f3044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962116)));
    // 0x2f3048: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F3048u;
    {
        const bool branch_taken_0x2f3048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3048) {
            ctx->pc = 0x2F304Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3048u;
            // 0x2f304c: 0xc62111c8  lwc1        $f1, 0x11C8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3160u;
            goto label_2f3160;
        }
    }
    ctx->pc = 0x2F3050u;
    // 0x2f3050: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f3050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f3054: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2f3054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3058: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2f305c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F305Cu;
    {
        const bool branch_taken_0x2f305c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F305Cu;
        // 0x2f3060: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f305c) {
            ctx->pc = 0x2F3078u;
            goto label_2f3078;
        }
    }
    ctx->pc = 0x2F3064u;
    // 0x2f3064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3068: 0x0  nop
    ctx->pc = 0x2f3068u;
    // NOP
    // 0x2f306c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3070u;
    {
        const bool branch_taken_0x2f3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3070) {
            ctx->pc = 0x2F3094u;
            goto label_2f3094;
        }
    }
    ctx->pc = 0x2F3078u;
label_2f3078:
    // 0x2f3078: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f3078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f307c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3088: 0x0  nop
    ctx->pc = 0x2f3088u;
    // NOP
    // 0x2f308c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3090: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3094:
    // 0x2f3094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f3094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3098: 0x0  nop
    ctx->pc = 0x2f3098u;
    // NOP
    // 0x2f309c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2F309Cu;
    {
        const bool branch_taken_0x2f309c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F309Cu;
        // 0x2f30a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f309c) {
            ctx->pc = 0x2F315Cu;
            goto label_2f315c;
        }
    }
    ctx->pc = 0x2F30A4u;
    // 0x2f30a4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2f30a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2f30a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f30a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f30ac: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x2f30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f30b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f30b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30b4: 0x0  nop
    ctx->pc = 0x2f30b4u;
    // NOP
    // 0x2f30b8: 0x46036303  div.s       $f12, $f12, $f3
    ctx->pc = 0x2f30b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[3]); }
    // 0x2f30bc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2f30bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f30c0: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x2F30C0u;
    SET_GPR_U32(ctx, 31, 0x2F30C8u);
    ctx->pc = 0x2F30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30C0u;
    // 0x2f30c4: 0x460c1300  add.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2F30C0u, 0x2F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30C8u;
label_2f30c8:
    // 0x2f30c8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f30cc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2f30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2f30d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F30D0u;
    {
        const bool branch_taken_0x2f30d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30D0u;
        // 0x2f30d4: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30d0) {
            ctx->pc = 0x2F30ECu;
            goto label_2f30ec;
        }
    }
    ctx->pc = 0x2F30D8u;
    // 0x2f30d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f30d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f30dc: 0x0  nop
    ctx->pc = 0x2f30dcu;
    // NOP
    // 0x2f30e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f30e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f30e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F30E4u;
    {
        const bool branch_taken_0x2f30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f30e4) {
            ctx->pc = 0x2F3108u;
            goto label_2f3108;
        }
    }
    ctx->pc = 0x2F30ECu;
label_2f30ec:
    // 0x2f30ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f30ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f30f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f30f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f30f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f30f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f30f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f30f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f30fc: 0x0  nop
    ctx->pc = 0x2f30fcu;
    // NOP
    // 0x2f3100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3104: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3108:
    // 0x2f3108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f3108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f310c: 0x0  nop
    ctx->pc = 0x2f310cu;
    // NOP
    // 0x2f3110: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2F3110u;
    {
        const bool branch_taken_0x2f3110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3110) {
            ctx->pc = 0x2F3114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3110u;
            // 0x2f3114: 0xc62111c8  lwc1        $f1, 0x11C8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3160u;
            goto label_2f3160;
        }
    }
    ctx->pc = 0x2F3118u;
    // 0x2f3118: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f311c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2f311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2f3120: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3120u;
    {
        const bool branch_taken_0x2f3120 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3120u;
        // 0x2f3124: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3120) {
            ctx->pc = 0x2F313Cu;
            goto label_2f313c;
        }
    }
    ctx->pc = 0x2F3128u;
    // 0x2f3128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f312c: 0x0  nop
    ctx->pc = 0x2f312cu;
    // NOP
    // 0x2f3130: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2f3130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2f3134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3134u;
    {
        const bool branch_taken_0x2f3134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3134) {
            ctx->pc = 0x2F3154u;
            goto label_2f3154;
        }
    }
    ctx->pc = 0x2F313Cu;
label_2f313c:
    // 0x2f313c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3140: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3148: 0x0  nop
    ctx->pc = 0x2f3148u;
    // NOP
    // 0x2f314c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2f314cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2f3150: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2f3150u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2f3154:
    // 0x2f3154: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x2F3154u;
    SET_GPR_U32(ctx, 31, 0x2F315Cu);
    ctx->pc = 0x2F3158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3154u;
    // 0x2f3158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2F3154u, 0x2F315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F315Cu;
label_2f315c:
    // 0x2f315c: 0xc62111c8  lwc1        $f1, 0x11C8($s1)
    ctx->pc = 0x2f315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3160:
    // 0x2f3160: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2f3160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2f3164: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f3164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f3168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f316c: 0x0  nop
    ctx->pc = 0x2f316cu;
    // NOP
    // 0x2f3170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f3170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3174: 0x0  nop
    ctx->pc = 0x2f3174u;
    // NOP
    // 0x2f3178: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3178u;
    {
        const bool branch_taken_0x2f3178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3178u;
        // 0x2f317c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3178) {
            ctx->pc = 0x2F3184u;
            goto label_2f3184;
        }
    }
    ctx->pc = 0x2F3180u;
    // 0x2f3180: 0xae2211cc  sw          $v0, 0x11CC($s1)
    ctx->pc = 0x2f3180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4556), GPR_U32(ctx, 2));
label_2f3184:
    // 0x2f3184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f3188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f318c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f318cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3190: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f3190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3194: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f3194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3198: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f3198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f319c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F319Cu;
        // 0x2f31a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F31A4u;
    // 0x2f31a4: 0x0  nop
    ctx->pc = 0x2f31a4u;
    // NOP
    ctx->pc = 0x2f31a8u;
}
