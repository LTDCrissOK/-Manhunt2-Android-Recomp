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

// Function: sub_002CA928
// Address: 0x2ca928 - 0x2ca978
void sub_002CA928_0x2ca928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA928_0x2ca928");
#endif

    switch (ctx->pc) {
        case 0x2ca948u: goto label_2ca948;
        default: break;
    }

    ctx->pc = 0x2ca928u;

    // 0x2ca928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca92c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ca930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca93c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2ca93cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2ca940: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x2CA940u;
    SET_GPR_U32(ctx, 31, 0x2CA948u);
    ctx->pc = 0x2CA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA940u;
    // 0x2ca944: 0xac62b464  sw          $v0, -0x4B9C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947940), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x2CA940u, 0x2CA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA948u;
label_2ca948:
    // 0x2ca948: 0x8c431868  lw          $v1, 0x1868($v0)
    ctx->pc = 0x2ca948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6248)));
    // 0x2ca94c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ca94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ca950: 0x90a4b44c  lbu         $a0, -0x4BB4($a1)
    ctx->pc = 0x2ca950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x2ca954: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2ca954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2ca958: 0xae03a5dc  sw          $v1, -0x5A24($s0)
    ctx->pc = 0x2ca958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944220), GPR_U32(ctx, 3));
    // 0x2ca95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca960: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca964: 0xa0448d50  sb          $a0, -0x72B0($v0)
    ctx->pc = 0x2ca964u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x578D50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x578D50u, _value); } while (0);
    // 0x2ca968: 0xa0a0b44c  sb          $zero, -0x4BB4($a1)
    ctx->pc = 0x2ca968u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB44Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB44Cu, _value); } while (0);
    // 0x2ca96c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA96Cu;
        // 0x2ca970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA974u;
    // 0x2ca974: 0x0  nop
    ctx->pc = 0x2ca974u;
    // NOP
    ctx->pc = 0x2ca978u;
}
