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

// Function: sub_003BFBE8
// Address: 0x3bfbe8 - 0x3bfc68
void sub_003BFBE8_0x3bfbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFBE8_0x3bfbe8");
#endif

    switch (ctx->pc) {
        case 0x3bfc54u: goto label_3bfc54;
        default: break;
    }

    ctx->pc = 0x3bfbe8u;

    // 0x3bfbe8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3bfbec: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3bfbecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3bfbf0: 0x8c4dcddc  lw          $t5, -0x3224($v0)
    ctx->pc = 0x3bfbf0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3bfbf4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3bfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3bfbf8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3bfbf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bfbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3bfc00: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x3bfc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x3bfc04: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3bfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3bfc08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3bfc0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bfc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc10: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3bfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3bfc14: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3bfc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bfc18: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3bfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3bfc1c: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x3bfc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x3bfc20: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x3bfc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x3bfc24: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x3bfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x3bfc28: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x3bfc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x3bfc2c: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x3bfc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x3bfc30: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x3bfc30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3bfc34: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x3bfc34u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3bfc38: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x3bfc38u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3bfc3c: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x3bfc3cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3bfc40: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3bfc40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bfc44: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x3bfc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x3bfc48: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x3bfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x3bfc4c: 0xc0f0d10  jal         func_3C3440
    ctx->pc = 0x3BFC4Cu;
    SET_GPR_U32(ctx, 31, 0x3BFC54u);
    ctx->pc = 0x3BFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFC4Cu;
    // 0x3bfc50: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3440u, 0x3BFC4Cu, 0x3BFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFC54u;
label_3bfc54:
    // 0x3bfc54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bfc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfc58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bfc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bfc5c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3bfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bfc60: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC60u;
        // 0x3bfc64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFC68u;
}
