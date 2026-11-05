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

// Function: sub_002FE470
// Address: 0x2fe470 - 0x2fe4d8
void sub_002FE470_0x2fe470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE470_0x2fe470");
#endif

    ctx->pc = 0x2fe470u;

    // 0x2fe470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe474: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FE474u;
    {
        const bool branch_taken_0x2fe474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE474u;
        // 0x2fe478: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe474) {
            ctx->pc = 0x2FE4B4u;
            goto label_2fe4b4;
        }
    }
    ctx->pc = 0x2FE47Cu;
    // 0x2fe47c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE47Cu;
    {
        const bool branch_taken_0x2fe47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe47c) {
            ctx->pc = 0x2FE480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE47Cu;
            // 0x2fe480: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE494u;
            goto label_2fe494;
        }
    }
    ctx->pc = 0x2FE484u;
    // 0x2fe484: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE484u;
    {
        const bool branch_taken_0x2fe484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE484u;
        // 0x2fe488: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe484) {
            ctx->pc = 0x2FE4ACu;
            goto label_2fe4ac;
        }
    }
    ctx->pc = 0x2FE48Cu;
    // 0x2fe48c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE494u;
label_2fe494:
    // 0x2fe494: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE494u;
    {
        const bool branch_taken_0x2fe494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE494u;
        // 0x2fe498: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe494) {
            ctx->pc = 0x2FE4C0u;
            goto label_2fe4c0;
        }
    }
    ctx->pc = 0x2FE49Cu;
    // 0x2fe49c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE49Cu;
    {
        const bool branch_taken_0x2fe49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE49Cu;
        // 0x2fe4a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe49c) {
            ctx->pc = 0x2FE4CCu;
            goto label_2fe4cc;
        }
    }
    ctx->pc = 0x2FE4A4u;
    // 0x2fe4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4ACu;
label_2fe4ac:
    // 0x2fe4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4ACu;
        // 0x2fe4b0: 0xe44cbad0  swc1        $f12, -0x4530($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4B4u;
label_2fe4b4:
    // 0x2fe4b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4B8u;
        // 0x2fe4bc: 0xe44cbad8  swc1        $f12, -0x4528($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4C0u;
label_2fe4c0:
    // 0x2fe4c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe4c4: 0xe44cbad4  swc1        $f12, -0x452C($v0)
    ctx->pc = 0x2fe4c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBAD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBAD4u, _value); } while (0); }
    // 0x2fe4c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fe4cc:
    // 0x2fe4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4CCu;
        // 0x2fe4d0: 0xe44cbadc  swc1        $f12, -0x4524($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949596), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4D4u;
    // 0x2fe4d4: 0x0  nop
    ctx->pc = 0x2fe4d4u;
    // NOP
    ctx->pc = 0x2fe4d8u;
}
