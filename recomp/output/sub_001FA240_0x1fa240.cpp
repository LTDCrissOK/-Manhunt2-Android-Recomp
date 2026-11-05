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

// Function: sub_001FA240
// Address: 0x1fa240 - 0x1fa2b0
void sub_001FA240_0x1fa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA240_0x1fa240");
#endif

    switch (ctx->pc) {
        case 0x1fa2a0u: goto label_1fa2a0;
        default: break;
    }

    ctx->pc = 0x1fa240u;

    // 0x1fa240: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1fa244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa248: 0x90a39310  lbu         $v1, -0x6CF0($a1)
    ctx->pc = 0x1fa248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9310u));
    // 0x1fa24c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x1fa250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa254: 0x24c6cfb0  addiu       $a2, $a2, -0x3050
    ctx->pc = 0x1fa254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954928));
    // 0x1fa258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa25c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fa25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa260: 0xa0a39310  sb          $v1, -0x6CF0($a1)
    ctx->pc = 0x1fa260u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9310u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9310u, _value); } while (0);
    // 0x1fa264: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fa264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fa268: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fa268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fa26c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fa26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa274: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fa274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fa278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fa278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa27c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1fa27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1fa280: 0x90a29310  lbu         $v0, -0x6CF0($a1)
    ctx->pc = 0x1fa280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294939408)));
    // 0x1fa284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa288: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fa288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fa28c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fa28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fa290: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1fa290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fa294: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fa294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fa298: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1FA298u;
    SET_GPR_U32(ctx, 31, 0x1FA2A0u);
    ctx->pc = 0x1FA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA298u;
    // 0x1fa29c: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1FA298u, 0x1FA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2A0u;
label_1fa2a0:
    // 0x1fa2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A4u;
        // 0x1fa2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA2ACu;
    // 0x1fa2ac: 0x0  nop
    ctx->pc = 0x1fa2acu;
    // NOP
    ctx->pc = 0x1fa2b0u;
}
