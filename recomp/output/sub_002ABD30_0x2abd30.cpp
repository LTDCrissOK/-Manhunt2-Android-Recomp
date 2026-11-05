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

// Function: sub_002ABD30
// Address: 0x2abd30 - 0x2abdf0
void sub_002ABD30_0x2abd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABD30_0x2abd30");
#endif

    switch (ctx->pc) {
        case 0x2abd60u: goto label_2abd60;
        case 0x2abd68u: goto label_2abd68;
        case 0x2abd78u: goto label_2abd78;
        case 0x2abd88u: goto label_2abd88;
        case 0x2abda0u: goto label_2abda0;
        case 0x2abdacu: goto label_2abdac;
        default: break;
    }

    ctx->pc = 0x2abd30u;

    // 0x2abd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abd38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2abd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2abd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abd44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2abd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2abd48: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2ABD48u;
    {
        const bool branch_taken_0x2abd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD48u;
        // 0x2abd4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd48) {
            ctx->pc = 0x2ABDACu;
            goto label_2abdac;
        }
    }
    ctx->pc = 0x2ABD50u;
    // 0x2abd50: 0x52200017  beql        $s1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ABD50u;
    {
        const bool branch_taken_0x2abd50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abd50) {
            ctx->pc = 0x2ABD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABD50u;
            // 0x2abd54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABDB0u;
            goto label_2abdb0;
        }
    }
    ctx->pc = 0x2ABD58u;
    // 0x2abd58: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2ABD58u;
    SET_GPR_U32(ctx, 31, 0x2ABD60u);
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2ABD58u, 0x2ABD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD60u;
label_2abd60:
    // 0x2abd60: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2ABD60u;
    SET_GPR_U32(ctx, 31, 0x2ABD68u);
    ctx->pc = 0x2ABD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD60u;
    // 0x2abd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2ABD60u, 0x2ABD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD68u;
label_2abd68:
    // 0x2abd68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2abd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2abd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd70: 0xc0aaef2  jal         func_2ABBC8
    ctx->pc = 0x2ABD70u;
    SET_GPR_U32(ctx, 31, 0x2ABD78u);
    ctx->pc = 0x2ABD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD70u;
    // 0x2abd74: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC8u, 0x2ABD70u, 0x2ABD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD78u;
label_2abd78:
    // 0x2abd78: 0x96060024  lhu         $a2, 0x24($s0)
    ctx->pc = 0x2abd78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abd7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2abd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd80: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2ABD80u;
    SET_GPR_U32(ctx, 31, 0x2ABD88u);
    ctx->pc = 0x2ABD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD80u;
    // 0x2abd84: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2ABD80u, 0x2ABD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD88u;
label_2abd88:
    // 0x2abd88: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x2abd88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abd8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2abd90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2abd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abd94: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x2abd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abd98: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2ABD98u;
    SET_GPR_U32(ctx, 31, 0x2ABDA0u);
    ctx->pc = 0x2ABD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD98u;
    // 0x2abd9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2ABD98u, 0x2ABDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDA0u;
label_2abda0:
    // 0x2abda0: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x2abda0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x2abda4: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2ABDA4u;
    SET_GPR_U32(ctx, 31, 0x2ABDACu);
    ctx->pc = 0x2ABDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDA4u;
    // 0x2abda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2ABDA4u, 0x2ABDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDACu;
label_2abdac:
    // 0x2abdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abdb0:
    // 0x2abdb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2abdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abdb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDB8u;
        // 0x2abdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDC0u;
    // 0x2abdc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abdc4: 0x0  nop
    ctx->pc = 0x2abdc4u;
    // NOP
    // 0x2abdc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abdcc: 0x0  nop
    ctx->pc = 0x2abdccu;
    // NOP
    // 0x2abdd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abdd4: 0x0  nop
    ctx->pc = 0x2abdd4u;
    // NOP
    // 0x2abdd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2abdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2abddc: 0x0  nop
    ctx->pc = 0x2abddcu;
    // NOP
    // 0x2abde0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2abde4: 0x0  nop
    ctx->pc = 0x2abde4u;
    // NOP
    // 0x2abde8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2abde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2abdec: 0x0  nop
    ctx->pc = 0x2abdecu;
    // NOP
    ctx->pc = 0x2abdf0u;
}
