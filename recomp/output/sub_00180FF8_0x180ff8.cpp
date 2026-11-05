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

// Function: sub_00180FF8
// Address: 0x180ff8 - 0x1810b0
void sub_00180FF8_0x180ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180FF8_0x180ff8");
#endif

    switch (ctx->pc) {
        case 0x181020u: goto label_181020;
        case 0x181044u: goto label_181044;
        case 0x181068u: goto label_181068;
        default: break;
    }

    ctx->pc = 0x180ff8u;

    // 0x180ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180ffc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x180ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18100c: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x181010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181018: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x181018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18101c: 0x0  nop
    ctx->pc = 0x18101cu;
    // NOP
label_181020:
    // 0x181020: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x181020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181024: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x181024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x181028: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x181028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x18102c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x18102cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x181030: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x181030u;
    {
        const bool branch_taken_0x181030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181030u;
        // 0x181034: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181030) {
            ctx->pc = 0x181020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181020;
        }
    }
    ctx->pc = 0x181038u;
    // 0x181038: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x181038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18103c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x18103Cu;
    SET_GPR_U32(ctx, 31, 0x181044u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x18103Cu, 0x181044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181044u;
label_181044:
    // 0x181044: 0xc60d00f0  lwc1        $f13, 0xF0($s0)
    ctx->pc = 0x181044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x181048: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x181048u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x18104c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x18104cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181050: 0x0  nop
    ctx->pc = 0x181050u;
    // NOP
    // 0x181054: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x181054u;
    {
        const bool branch_taken_0x181054 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181054u;
        // 0x181058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181054) {
            ctx->pc = 0x18108Cu;
            goto label_18108c;
        }
    }
    ctx->pc = 0x18105Cu;
    // 0x18105c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x18105cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x181064: 0x0  nop
    ctx->pc = 0x181064u;
    // NOP
label_181068:
    // 0x181068: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x181068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18106c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18106Cu;
    {
        const bool branch_taken_0x18106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18106Cu;
        // 0x181070: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18106c) {
            ctx->pc = 0x18108Cu;
            goto label_18108c;
        }
    }
    ctx->pc = 0x181074u;
    // 0x181074: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x181074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181078: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x181078u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x18107c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x18107cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181080: 0x0  nop
    ctx->pc = 0x181080u;
    // NOP
    // 0x181084: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x181084u;
    {
        const bool branch_taken_0x181084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181084) {
            ctx->pc = 0x181088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181084u;
            // 0x181088: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181068;
        }
    }
    ctx->pc = 0x18108Cu;
label_18108c:
    // 0x18108c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18108cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x181090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18109c: 0x3e00008  jr          $ra
    ctx->pc = 0x18109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18109Cu;
        // 0x1810a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810A4u;
    // 0x1810a4: 0x0  nop
    ctx->pc = 0x1810a4u;
    // NOP
    // 0x1810a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1810ac: 0x0  nop
    ctx->pc = 0x1810acu;
    // NOP
    ctx->pc = 0x1810b0u;
}
