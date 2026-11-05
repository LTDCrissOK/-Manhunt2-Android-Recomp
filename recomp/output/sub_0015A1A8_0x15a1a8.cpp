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

// Function: sub_0015A1A8
// Address: 0x15a1a8 - 0x15a220
void sub_0015A1A8_0x15a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A1A8_0x15a1a8");
#endif

    switch (ctx->pc) {
        case 0x15a204u: goto label_15a204;
        default: break;
    }

    ctx->pc = 0x15a1a8u;

    // 0x15a1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a1ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15a1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15a1b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15a1b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15a1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a1bc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x15a1c0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x15a1c4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15a1c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15a1c8: 0x73e78  dsll        $a3, $a3, 25
    ctx->pc = 0x15a1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 25);
    // 0x15a1cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15a1d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15a1d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15a1d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a1e0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a1e4: 0x8c860108  lw          $a2, 0x108($a0)
    ctx->pc = 0x15a1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x15a1e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15a1e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1ec: 0xdcc21020  ld          $v0, 0x1020($a2)
    ctx->pc = 0x15a1ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
    // 0x15a1f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x15a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x15a1f4: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x15a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
    // 0x15a1f8: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x15a1fc: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A1FCu;
    SET_GPR_U32(ctx, 31, 0x15A204u);
    ctx->pc = 0x15A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A1FCu;
    // 0x15a200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A1FCu, 0x15A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A204u;
label_15a204:
    // 0x15a204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a208: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x15a208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x15a20c: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x15a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x15a210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a218: 0x3e00008  jr          $ra
    ctx->pc = 0x15A218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A218u;
        // 0x15a21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A220u;
}
