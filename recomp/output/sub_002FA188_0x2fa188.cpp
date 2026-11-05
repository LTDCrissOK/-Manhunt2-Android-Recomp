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

// Function: sub_002FA188
// Address: 0x2fa188 - 0x2fa208
void sub_002FA188_0x2fa188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA188_0x2fa188");
#endif

    switch (ctx->pc) {
        case 0x2fa1dcu: goto label_2fa1dc;
        case 0x2fa1f4u: goto label_2fa1f4;
        default: break;
    }

    ctx->pc = 0x2fa188u;

    // 0x2fa188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa18c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2fa18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2fa190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fa198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fa19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fa1a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fa1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa1a8: 0xae111368  sw          $s1, 0x1368($s0)
    ctx->pc = 0x2fa1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4968), GPR_U32(ctx, 17));
    // 0x2fa1ac: 0x8e0411e8  lw          $a0, 0x11E8($s0)
    ctx->pc = 0x2fa1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
    // 0x2fa1b0: 0x8e0211fc  lw          $v0, 0x11FC($s0)
    ctx->pc = 0x2fa1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
    // 0x2fa1b4: 0xae041364  sw          $a0, 0x1364($s0)
    ctx->pc = 0x2fa1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4964), GPR_U32(ctx, 4));
    // 0x2fa1b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fa1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fa1bc: 0x8c831100  lw          $v1, 0x1100($a0)
    ctx->pc = 0x2fa1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4352)));
    // 0x2fa1c0: 0xa2021371  sb          $v0, 0x1371($s0)
    ctx->pc = 0x2fa1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4977), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fa1c4: 0xae03136c  sw          $v1, 0x136C($s0)
    ctx->pc = 0x2fa1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4972), GPR_U32(ctx, 3));
    // 0x2fa1c8: 0x8c831100  lw          $v1, 0x1100($a0)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4352)));
    // 0x2fa1cc: 0x8ca4bd30  lw          $a0, -0x42D0($a1)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
    // 0x2fa1d0: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x2fa1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x2fa1d4: 0xc0b5bf2  jal         func_2D6FC8
    ctx->pc = 0x2FA1D4u;
    SET_GPR_U32(ctx, 31, 0x2FA1DCu);
    ctx->pc = 0x2FA1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1D4u;
    // 0x2fa1d8: 0x24a5002e  addiu       $a1, $a1, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FC8u, 0x2FA1D4u, 0x2FA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1DCu;
label_2fa1dc:
    // 0x2fa1dc: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2fa1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa1e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa1e4: 0xa2111384  sb          $s1, 0x1384($s0)
    ctx->pc = 0x2fa1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4996), (uint8_t)GPR_U32(ctx, 17));
    // 0x2fa1e8: 0xe60011ec  swc1        $f0, 0x11EC($s0)
    ctx->pc = 0x2fa1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4588), bits); }
    // 0x2fa1ec: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2FA1ECu;
    SET_GPR_U32(ctx, 31, 0x2FA1F4u);
    ctx->pc = 0x2FA1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1ECu;
    // 0x2fa1f0: 0xae021380  sw          $v0, 0x1380($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2FA1ECu, 0x2FA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1F4u;
label_2fa1f4:
    // 0x2fa1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa1f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fa1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa1fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fa1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa200: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA200u;
        // 0x2fa204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA208u;
}
