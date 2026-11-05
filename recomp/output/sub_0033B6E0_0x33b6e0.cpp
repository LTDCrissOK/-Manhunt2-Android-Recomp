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

// Function: sub_0033B6E0
// Address: 0x33b6e0 - 0x33b770
void sub_0033B6E0_0x33b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B6E0_0x33b6e0");
#endif

    switch (ctx->pc) {
        case 0x33b704u: goto label_33b704;
        case 0x33b710u: goto label_33b710;
        case 0x33b71cu: goto label_33b71c;
        case 0x33b728u: goto label_33b728;
        default: break;
    }

    ctx->pc = 0x33b6e0u;

    // 0x33b6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b6e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33b6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b6e8: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33B6E8u;
    {
        const bool branch_taken_0x33b6e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6E8u;
        // 0x33b6ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b6e8) {
            ctx->pc = 0x33B764u;
            goto label_33b764;
        }
    }
    ctx->pc = 0x33B6F0u;
    // 0x33b6f0: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B6F0u;
    {
        const bool branch_taken_0x33b6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6F0u;
        // 0x33b6f4: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b6f0) {
            ctx->pc = 0x33B764u;
            goto label_33b764;
        }
    }
    ctx->pc = 0x33B6F8u;
    // 0x33b6f8: 0x24846ec0  addiu       $a0, $a0, 0x6EC0
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
    // 0x33b6fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B6FCu;
    SET_GPR_U32(ctx, 31, 0x33B704u);
    ctx->pc = 0x33B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6FCu;
    // 0x33b700: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B6FCu, 0x33B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B704u;
label_33b704:
    // 0x33b704: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33b704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33b708: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B708u;
    SET_GPR_U32(ctx, 31, 0x33B710u);
    ctx->pc = 0x33B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B708u;
    // 0x33b70c: 0x24846f60  addiu       $a0, $a0, 0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B708u, 0x33B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B710u;
label_33b710:
    // 0x33b710: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33b710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33b714: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B714u;
    SET_GPR_U32(ctx, 31, 0x33B71Cu);
    ctx->pc = 0x33B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B714u;
    // 0x33b718: 0x24846f70  addiu       $a0, $a0, 0x6F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B714u, 0x33B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B71Cu;
label_33b71c:
    // 0x33b71c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33b720: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B720u;
    SET_GPR_U32(ctx, 31, 0x33B728u);
    ctx->pc = 0x33B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B720u;
    // 0x33b724: 0x24846f80  addiu       $a0, $a0, 0x6F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B720u, 0x33B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B728u;
label_33b728:
    // 0x33b728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b72c: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x33b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x33b730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33b730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33b734: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b738: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x33b738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x33b73c: 0x24a26f98  addiu       $v0, $a1, 0x6F98
    ctx->pc = 0x33b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x33b740: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33b740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33b744: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6F9Cu, _value); } while (0); }
    // 0x33b748: 0x24c36fa0  addiu       $v1, $a2, 0x6FA0
    ctx->pc = 0x33b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28576));
    // 0x33b74c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33b74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6FA4u, _value); } while (0); }
    // 0x33b750: 0x24876f90  addiu       $a3, $a0, 0x6F90
    ctx->pc = 0x33b750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28560));
    // 0x33b754: 0xe4806f90  swc1        $f0, 0x6F90($a0)
    ctx->pc = 0x33b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6F90u, _value); } while (0); }
    // 0x33b758: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x33b758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6F94u, _value); } while (0); }
    // 0x33b75c: 0xe4a16f98  swc1        $f1, 0x6F98($a1)
    ctx->pc = 0x33b75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6F98u, _value); } while (0); }
    // 0x33b760: 0xe4c16fa0  swc1        $f1, 0x6FA0($a2)
    ctx->pc = 0x33b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6FA0u, _value); } while (0); }
label_33b764:
    // 0x33b764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b768: 0x3e00008  jr          $ra
    ctx->pc = 0x33B768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B768u;
        // 0x33b76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B770u;
}
