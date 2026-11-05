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

// Function: sub_0026EE68
// Address: 0x26ee68 - 0x26ef28
void sub_0026EE68_0x26ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EE68_0x26ee68");
#endif

    switch (ctx->pc) {
        case 0x26eea4u: goto label_26eea4;
        case 0x26eeb0u: goto label_26eeb0;
        case 0x26eeb8u: goto label_26eeb8;
        case 0x26eec4u: goto label_26eec4;
        case 0x26eed0u: goto label_26eed0;
        case 0x26eee8u: goto label_26eee8;
        case 0x26eefcu: goto label_26eefc;
        case 0x26ef08u: goto label_26ef08;
        case 0x26ef10u: goto label_26ef10;
        default: break;
    }

    ctx->pc = 0x26ee68u;

    // 0x26ee68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26ee6c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x26ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x26ee70: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26ee74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ee74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee78: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x26ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x26ee7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26ee7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee80: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x26EE80u;
    {
        const bool branch_taken_0x26ee80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE80u;
        // 0x26ee84: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee80) {
            ctx->pc = 0x26EF10u;
            goto label_26ef10;
        }
    }
    ctx->pc = 0x26EE88u;
    // 0x26ee88: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x26ee8c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26EE8Cu;
    {
        const bool branch_taken_0x26ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ee8c) {
            ctx->pc = 0x26EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EE8Cu;
            // 0x26ee90: 0xae320248  sw          $s2, 0x248($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EEC8u;
            goto label_26eec8;
        }
    }
    ctx->pc = 0x26EE94u;
    // 0x26ee94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x26ee98: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x26ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26ee9c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x26EE9Cu;
    SET_GPR_U32(ctx, 31, 0x26EEA4u);
    ctx->pc = 0x26EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE9Cu;
    // 0x26eea0: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x26EE9Cu, 0x26EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEA4u;
label_26eea4:
    // 0x26eea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eea8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26EEA8u;
    SET_GPR_U32(ctx, 31, 0x26EEB0u);
    ctx->pc = 0x26EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEA8u;
    // 0x26eeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26EEA8u, 0x26EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEB0u;
label_26eeb0:
    // 0x26eeb0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26EEB0u;
    SET_GPR_U32(ctx, 31, 0x26EEB8u);
    ctx->pc = 0x26EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEB0u;
    // 0x26eeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26EEB0u, 0x26EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEB8u;
label_26eeb8:
    // 0x26eeb8: 0xae30024c  sw          $s0, 0x24C($s1)
    ctx->pc = 0x26eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 16));
    // 0x26eebc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26EEBCu;
    SET_GPR_U32(ctx, 31, 0x26EEC4u);
    ctx->pc = 0x26EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEBCu;
    // 0x26eec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26EEBCu, 0x26EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEC4u;
label_26eec4:
    // 0x26eec4: 0xae320248  sw          $s2, 0x248($s1)
    ctx->pc = 0x26eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 18));
label_26eec8:
    // 0x26eec8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26EEC8u;
    SET_GPR_U32(ctx, 31, 0x26EED0u);
    ctx->pc = 0x26EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEC8u;
    // 0x26eecc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26EEC8u, 0x26EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EED0u;
label_26eed0:
    // 0x26eed0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x26eed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26eed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eedc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26eee0: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x26EEE0u;
    SET_GPR_U32(ctx, 31, 0x26EEE8u);
    ctx->pc = 0x26EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEE0u;
    // 0x26eee4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x26EEE0u, 0x26EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEE8u;
label_26eee8:
    // 0x26eee8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26eeec: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x26eef0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26eef4: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x26EEF4u;
    SET_GPR_U32(ctx, 31, 0x26EEFCu);
    ctx->pc = 0x26EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EEF4u;
    // 0x26eef8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x26EEF4u, 0x26EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEFCu;
label_26eefc:
    // 0x26eefc: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x26eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x26ef00: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x26EF00u;
    SET_GPR_U32(ctx, 31, 0x26EF08u);
    ctx->pc = 0x26EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF00u;
    // 0x26ef04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x26EF00u, 0x26EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF08u;
label_26ef08:
    // 0x26ef08: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x26EF08u;
    SET_GPR_U32(ctx, 31, 0x26EF10u);
    ctx->pc = 0x26EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF08u;
    // 0x26ef0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x26EF08u, 0x26EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF10u;
label_26ef10:
    // 0x26ef10: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x26ef10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ef14: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x26ef14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26ef18: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26ef18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ef1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x26ef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ef20: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF20u;
        // 0x26ef24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF28u;
}
