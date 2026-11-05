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

// Function: sub_0029F2E0
// Address: 0x29f2e0 - 0x29f378
void sub_0029F2E0_0x29f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F2E0_0x29f2e0");
#endif

    switch (ctx->pc) {
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f318u: goto label_29f318;
        case 0x29f328u: goto label_29f328;
        default: break;
    }

    ctx->pc = 0x29f2e0u;

    // 0x29f2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f2e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29f2ec: 0xc0a7bca  jal         func_29EF28
    ctx->pc = 0x29F2ECu;
    SET_GPR_U32(ctx, 31, 0x29F2F4u);
    ctx->pc = 0x29F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2ECu;
    // 0x29f2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EF28u, 0x29F2ECu, 0x29F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2F4u;
label_29f2f4:
    // 0x29f2f4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x29F2F4u;
    {
        const bool branch_taken_0x29f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f2f4) {
            ctx->pc = 0x29F2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F2F4u;
            // 0x29f2f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F36Cu;
            goto label_29f36c;
        }
    }
    ctx->pc = 0x29F2FCu;
    // 0x29f2fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29f2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29f300: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29f300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29f304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29f304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f308: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x29f308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29f30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f310: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x29f310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29f314: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x29f314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29f318:
    // 0x29f318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f31c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29f320: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x29f320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29f324: 0x0  nop
    ctx->pc = 0x29f324u;
    // NOP
label_29f328:
    // 0x29f328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f32c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F32Cu;
    {
        const bool branch_taken_0x29f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F32Cu;
        // 0x29f330: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f32c) {
            ctx->pc = 0x29F350u;
            goto label_29f350;
        }
    }
    ctx->pc = 0x29F334u;
    // 0x29f334: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29f338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29f33c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x29f33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x29f340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f344: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x29f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29f348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29f34c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x29f34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_29f350:
    // 0x29f350: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x29f350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29f354: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29F354u;
    {
        const bool branch_taken_0x29f354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F354u;
        // 0x29f358: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f354) {
            ctx->pc = 0x29F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f328;
        }
    }
    ctx->pc = 0x29F35Cu;
    // 0x29f35c: 0x2c820019  sltiu       $v0, $a0, 0x19
    ctx->pc = 0x29f35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29f360: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29F360u;
    {
        const bool branch_taken_0x29f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F360u;
        // 0x29f364: 0x861018  mult        $v0, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f360) {
            ctx->pc = 0x29F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f318;
        }
    }
    ctx->pc = 0x29F368u;
    // 0x29f368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f36c:
    // 0x29f36c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f370: 0x3e00008  jr          $ra
    ctx->pc = 0x29F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F370u;
        // 0x29f374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F378u;
}
