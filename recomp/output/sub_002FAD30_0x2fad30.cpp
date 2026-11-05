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

// Function: sub_002FAD30
// Address: 0x2fad30 - 0x2fade0
void sub_002FAD30_0x2fad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAD30_0x2fad30");
#endif

    switch (ctx->pc) {
        case 0x2fad68u: goto label_2fad68;
        case 0x2fad70u: goto label_2fad70;
        case 0x2fad7cu: goto label_2fad7c;
        case 0x2fadb0u: goto label_2fadb0;
        case 0x2fadccu: goto label_2fadcc;
        default: break;
    }

    ctx->pc = 0x2fad30u;

    // 0x2fad30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fad34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fad38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fad3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fad3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fad44: 0xae001368  sw          $zero, 0x1368($s0)
    ctx->pc = 0x2fad44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4968), GPR_U32(ctx, 0));
    // 0x2fad48: 0x8e0211fc  lw          $v0, 0x11FC($s0)
    ctx->pc = 0x2fad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
    // 0x2fad4c: 0x8e0311e8  lw          $v1, 0x11E8($s0)
    ctx->pc = 0x2fad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
    // 0x2fad50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fad50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fad54: 0xae0011f8  sw          $zero, 0x11F8($s0)
    ctx->pc = 0x2fad54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4600), GPR_U32(ctx, 0));
    // 0x2fad58: 0xae00136c  sw          $zero, 0x136C($s0)
    ctx->pc = 0x2fad58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4972), GPR_U32(ctx, 0));
    // 0x2fad5c: 0xae031364  sw          $v1, 0x1364($s0)
    ctx->pc = 0x2fad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4964), GPR_U32(ctx, 3));
    // 0x2fad60: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2FAD60u;
    SET_GPR_U32(ctx, 31, 0x2FAD68u);
    ctx->pc = 0x2FAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD60u;
    // 0x2fad64: 0xa2021371  sb          $v0, 0x1371($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4977), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FAD60u, 0x2FAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD68u;
label_2fad68:
    // 0x2fad68: 0xc09876c  jal         func_261DB0
    ctx->pc = 0x2FAD68u;
    SET_GPR_U32(ctx, 31, 0x2FAD70u);
    ctx->pc = 0x2FAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD68u;
    // 0x2fad6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2FAD68u, 0x2FAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD70u;
label_2fad70:
    // 0x2fad70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad74: 0xc0be5e2  jal         func_2F9788
    ctx->pc = 0x2FAD74u;
    SET_GPR_U32(ctx, 31, 0x2FAD7Cu);
    ctx->pc = 0x2FAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD74u;
    // 0x2fad78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FAD74u, 0x2FAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD7Cu;
label_2fad7c:
    // 0x2fad7c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2fad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fad80: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2fad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
    // 0x2fad84: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2fad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2fad88: 0x90641430  lbu         $a0, 0x1430($v1)
    ctx->pc = 0x2fad88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5168)));
    // 0x2fad8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAD8Cu;
    {
        const bool branch_taken_0x2fad8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD8Cu;
        // 0x2fad90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad8c) {
            ctx->pc = 0x2FADA0u;
            goto label_2fada0;
        }
    }
    ctx->pc = 0x2FAD94u;
    // 0x2fad94: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2fad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2fad98: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2fad98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fad9c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2fad9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2fada0:
    // 0x2fada0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fada4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fada4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fada8: 0xc0b5bf2  jal         func_2D6FC8
    ctx->pc = 0x2FADA8u;
    SET_GPR_U32(ctx, 31, 0x2FADB0u);
    ctx->pc = 0x2FADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADA8u;
    // 0x2fadac: 0x8c44bd30  lw          $a0, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FC8u, 0x2FADA8u, 0x2FADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADB0u;
label_2fadb0:
    // 0x2fadb0: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2fadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fadb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fadb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fadb8: 0xa2031384  sb          $v1, 0x1384($s0)
    ctx->pc = 0x2fadb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4996), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fadbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fadc0: 0xe60011ec  swc1        $f0, 0x11EC($s0)
    ctx->pc = 0x2fadc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4588), bits); }
    // 0x2fadc4: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2FADC4u;
    SET_GPR_U32(ctx, 31, 0x2FADCCu);
    ctx->pc = 0x2FADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADC4u;
    // 0x2fadc8: 0xae021380  sw          $v0, 0x1380($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2FADC4u, 0x2FADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADCCu;
label_2fadcc:
    // 0x2fadcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fadccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fadd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fadd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fadd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fadd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fadd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD8u;
        // 0x2faddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FADE0u;
}
