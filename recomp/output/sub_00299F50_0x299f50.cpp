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

// Function: sub_00299F50
// Address: 0x299f50 - 0x299fe8
void sub_00299F50_0x299f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F50_0x299f50");
#endif

    switch (ctx->pc) {
        case 0x299f50u: goto label_299f50;
        case 0x299f54u: goto label_299f54;
        case 0x299f58u: goto label_299f58;
        case 0x299f5cu: goto label_299f5c;
        case 0x299f60u: goto label_299f60;
        case 0x299f64u: goto label_299f64;
        case 0x299f68u: goto label_299f68;
        case 0x299f6cu: goto label_299f6c;
        case 0x299f70u: goto label_299f70;
        case 0x299f74u: goto label_299f74;
        case 0x299f78u: goto label_299f78;
        case 0x299f7cu: goto label_299f7c;
        case 0x299f80u: goto label_299f80;
        case 0x299f84u: goto label_299f84;
        case 0x299f88u: goto label_299f88;
        case 0x299f8cu: goto label_299f8c;
        case 0x299f90u: goto label_299f90;
        case 0x299f94u: goto label_299f94;
        case 0x299f98u: goto label_299f98;
        case 0x299f9cu: goto label_299f9c;
        case 0x299fa0u: goto label_299fa0;
        case 0x299fa4u: goto label_299fa4;
        case 0x299fa8u: goto label_299fa8;
        case 0x299facu: goto label_299fac;
        case 0x299fb0u: goto label_299fb0;
        case 0x299fb4u: goto label_299fb4;
        case 0x299fb8u: goto label_299fb8;
        case 0x299fbcu: goto label_299fbc;
        case 0x299fc0u: goto label_299fc0;
        case 0x299fc4u: goto label_299fc4;
        case 0x299fc8u: goto label_299fc8;
        case 0x299fccu: goto label_299fcc;
        case 0x299fd0u: goto label_299fd0;
        case 0x299fd4u: goto label_299fd4;
        case 0x299fd8u: goto label_299fd8;
        case 0x299fdcu: goto label_299fdc;
        case 0x299fe0u: goto label_299fe0;
        case 0x299fe4u: goto label_299fe4;
        default: break;
    }

    ctx->pc = 0x299f50u;

label_299f50:
    // 0x299f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_299f54:
    // 0x299f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299f58:
    // 0x299f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299f5c:
    // 0x299f5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x299f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_299f60:
    // 0x299f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x299f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_299f64:
    // 0x299f64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x299f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_299f68:
    // 0x299f68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_299f6c:
    // 0x299f6c: 0xc0a5952  jal         func_296548
label_299f70:
    if (ctx->pc == 0x299F70u) {
        ctx->pc = 0x299F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F6Cu;
        // 0x299f70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F74u;
        goto label_299f74;
    }
    ctx->pc = 0x299F6Cu;
    SET_GPR_U32(ctx, 31, 0x299F74u);
    ctx->pc = 0x299F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F6Cu;
    // 0x299f70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296548u, 0x299F6Cu, 0x299F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F74u;
label_299f74:
    // 0x299f74: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x299f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_299f78:
    // 0x299f78: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_299f7c:
    if (ctx->pc == 0x299F7Cu) {
        ctx->pc = 0x299F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F78u;
        // 0x299f7c: 0x26130028  addiu       $s3, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F80u;
        goto label_299f80;
    }
    ctx->pc = 0x299F78u;
    {
        const bool branch_taken_0x299f78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x299F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F78u;
        // 0x299f7c: 0x26130028  addiu       $s3, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f78) {
            ctx->pc = 0x299FC8u;
            goto label_299fc8;
        }
    }
    ctx->pc = 0x299F80u;
label_299f80:
    // 0x299f80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x299f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299f84:
    // 0x299f84: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x299f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_299f88:
    // 0x299f88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x299f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_299f8c:
    // 0x299f8c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x299f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299f90:
    // 0x299f90: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x299f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_299f94:
    // 0x299f94: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x299f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_299f98:
    // 0x299f98: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x299f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299f9c:
    // 0x299f9c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x299f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_299fa0:
    // 0x299fa0: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x299fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_299fa4:
    // 0x299fa4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x299fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_299fa8:
    // 0x299fa8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x299fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_299fac:
    // 0x299fac: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x299facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_299fb0:
    // 0x299fb0: 0x60f809  jalr        $v1
label_299fb4:
    if (ctx->pc == 0x299FB4u) {
        ctx->pc = 0x299FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FB0u;
        // 0x299fb4: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299FB8u;
        goto label_299fb8;
    }
    ctx->pc = 0x299FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x299FB8u);
        ctx->pc = 0x299FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FB0u;
        // 0x299fb4: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FB0u, 0x299FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299FB8u;
label_299fb8:
    // 0x299fb8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_299fbc:
    // 0x299fbc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x299fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299fc0:
    // 0x299fc0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_299fc4:
    if (ctx->pc == 0x299FC4u) {
        ctx->pc = 0x299FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FC0u;
        // 0x299fc4: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299FC8u;
        goto label_299fc8;
    }
    ctx->pc = 0x299FC0u;
    {
        const bool branch_taken_0x299fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299fc0) {
            ctx->pc = 0x299FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299FC0u;
            // 0x299fc4: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299f88;
        }
    }
    ctx->pc = 0x299FC8u;
label_299fc8:
    // 0x299fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299fcc:
    // 0x299fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x299fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_299fd0:
    // 0x299fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x299fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299fd4:
    // 0x299fd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x299fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_299fd8:
    // 0x299fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x299fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_299fdc:
    // 0x299fdc: 0x3e00008  jr          $ra
label_299fe0:
    if (ctx->pc == 0x299FE0u) {
        ctx->pc = 0x299FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FDCu;
        // 0x299fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299FE4u;
        goto label_299fe4;
    }
    ctx->pc = 0x299FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FDCu;
        // 0x299fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FE4u;
label_299fe4:
    // 0x299fe4: 0x0  nop
    ctx->pc = 0x299fe4u;
    // NOP
    ctx->pc = 0x299fe8u;
}
