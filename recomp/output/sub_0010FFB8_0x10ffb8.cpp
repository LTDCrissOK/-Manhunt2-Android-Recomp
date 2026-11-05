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

// Function: sub_0010FFB8
// Address: 0x10ffb8 - 0x110050
void sub_0010FFB8_0x10ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FFB8_0x10ffb8");
#endif

    switch (ctx->pc) {
        case 0x10ffecu: goto label_10ffec;
        case 0x110004u: goto label_110004;
        case 0x110010u: goto label_110010;
        case 0x110030u: goto label_110030;
        default: break;
    }

    ctx->pc = 0x10ffb8u;

    // 0x10ffb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ffbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ffc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ffc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ffc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ffcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10ffccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ffd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ffd8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10ffdc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10FFDCu;
    {
        const bool branch_taken_0x10ffdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFDCu;
        // 0x10ffe0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffdc) {
            ctx->pc = 0x110030u;
            goto label_110030;
        }
    }
    ctx->pc = 0x10FFE4u;
    // 0x10ffe4: 0xc0449c8  jal         func_112720
    ctx->pc = 0x10FFE4u;
    SET_GPR_U32(ctx, 31, 0x10FFECu);
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x10FFE4u, 0x10FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFECu;
label_10ffec:
    // 0x10ffec: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x10ffecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10fff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10fff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fff4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10fff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fffc: 0xc045612  jal         func_115848
    ctx->pc = 0x10FFFCu;
    SET_GPR_U32(ctx, 31, 0x110004u);
    ctx->pc = 0x110000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFFCu;
    // 0x110000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x10FFFCu, 0x110004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110004u;
label_110004:
    // 0x110004: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110008: 0xc045668  jal         func_1159A0
    ctx->pc = 0x110008u;
    SET_GPR_U32(ctx, 31, 0x110010u);
    ctx->pc = 0x11000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110008u;
    // 0x11000c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x110008u, 0x110010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110010u;
label_110010:
    // 0x110010: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x110010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x110014: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x110018: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x110018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x11001c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11001cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110020: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x110024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110028: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x110028u;
    SET_GPR_U32(ctx, 31, 0x110030u);
    ctx->pc = 0x11002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110028u;
    // 0x11002c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x110028u, 0x110030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110030u;
label_110030:
    // 0x110030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x110038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11003c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11003cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110044: 0x3e00008  jr          $ra
    ctx->pc = 0x110044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110044u;
        // 0x110048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11004Cu;
    // 0x11004c: 0x0  nop
    ctx->pc = 0x11004cu;
    // NOP
    ctx->pc = 0x110050u;
}
