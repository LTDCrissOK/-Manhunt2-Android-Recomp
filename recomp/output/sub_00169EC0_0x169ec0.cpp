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

// Function: sub_00169EC0
// Address: 0x169ec0 - 0x169f98
void sub_00169EC0_0x169ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169EC0_0x169ec0");
#endif

    switch (ctx->pc) {
        case 0x169ef4u: goto label_169ef4;
        case 0x169f14u: goto label_169f14;
        case 0x169f50u: goto label_169f50;
        case 0x169f80u: goto label_169f80;
        default: break;
    }

    ctx->pc = 0x169ec0u;

    // 0x169ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ecc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169ed0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x169ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x169ed4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x169ed8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x169ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x169edc: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x169edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x169ee0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x169ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x169ee4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x169ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x169ee8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x169ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x169eec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x169EECu;
    SET_GPR_U32(ctx, 31, 0x169EF4u);
    ctx->pc = 0x169EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EECu;
    // 0x169ef0: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x169EECu, 0x169EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EF4u;
label_169ef4:
    // 0x169ef4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x169ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x169ef8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x169efc: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x169efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x169f00: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x169f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x169f04: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x169f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x169f08: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x169f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x169f0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x169F0Cu;
    SET_GPR_U32(ctx, 31, 0x169F14u);
    ctx->pc = 0x169F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F0Cu;
    // 0x169f10: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x169F0Cu, 0x169F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F14u;
label_169f14:
    // 0x169f14: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x169f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x169f18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x169f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x169f1c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x169f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x169f20: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x169f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x169f24: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x169f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x169f28: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x169f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x169f2c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x169f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x169f30: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x169f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x169f34: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x169f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x169f38: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x169f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x169f3c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x169f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x169f40: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x169f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x169f44: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x169f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x169f48: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x169f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x169f4c: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x169f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
label_169f50:
    // 0x169f50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x169f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x169f54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x169f58: 0x0  nop
    ctx->pc = 0x169f58u;
    // NOP
    // 0x169f5c: 0x0  nop
    ctx->pc = 0x169f5cu;
    // NOP
    // 0x169f60: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x169F60u;
    {
        const bool branch_taken_0x169f60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x169F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F60u;
        // 0x169f64: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f60) {
            ctx->pc = 0x169F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f50;
        }
    }
    ctx->pc = 0x169F68u;
    // 0x169f68: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x169f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x169f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f70: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x169f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x169f74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x169f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x169f78: 0xc05aac2  jal         func_16AB08
    ctx->pc = 0x169F78u;
    SET_GPR_U32(ctx, 31, 0x169F80u);
    ctx->pc = 0x169F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F78u;
    // 0x169f7c: 0xa2000194  sb          $zero, 0x194($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB08u, 0x169F78u, 0x169F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F80u;
label_169f80:
    // 0x169f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x169F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F8Cu;
        // 0x169f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169F94u;
    // 0x169f94: 0x0  nop
    ctx->pc = 0x169f94u;
    // NOP
    ctx->pc = 0x169f98u;
}
