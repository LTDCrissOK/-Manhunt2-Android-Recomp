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

// Function: sub_0010A168
// Address: 0x10a168 - 0x10a1e8
void sub_0010A168_0x10a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A168_0x10a168");
#endif

    switch (ctx->pc) {
        case 0x10a18cu: goto label_10a18c;
        case 0x10a1b8u: goto label_10a1b8;
        case 0x10a1c8u: goto label_10a1c8;
        default: break;
    }

    ctx->pc = 0x10a168u;

    // 0x10a168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a17c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10a180: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a184: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A184u;
    SET_GPR_U32(ctx, 31, 0x10A18Cu);
    ctx->pc = 0x10A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A184u;
    // 0x10a188: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A184u, 0x10A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A18Cu;
label_10a18c:
    // 0x10a18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a190: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a194: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a198: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a19c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a1a0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10A1A0u;
    {
        const bool branch_taken_0x10a1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a1a0) {
            ctx->pc = 0x10A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A1A0u;
            // 0x10a1a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A1CCu;
            goto label_10a1cc;
        }
    }
    ctx->pc = 0x10A1A8u;
    // 0x10a1a8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a1ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1b0: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A1B0u;
    SET_GPR_U32(ctx, 31, 0x10A1B8u);
    ctx->pc = 0x10A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1B0u;
    // 0x10a1b4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A1B0u, 0x10A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1B8u;
label_10a1b8:
    // 0x10a1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1c0: 0xc044128  jal         func_1104A0
    ctx->pc = 0x10A1C0u;
    SET_GPR_U32(ctx, 31, 0x10A1C8u);
    ctx->pc = 0x10A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1C0u;
    // 0x10a1c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104A0u, 0x10A1C0u, 0x10A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1C8u;
label_10a1c8:
    // 0x10a1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a1cc:
    // 0x10a1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a1d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10a1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1DCu;
        // 0x10a1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A1E4u;
    // 0x10a1e4: 0x0  nop
    ctx->pc = 0x10a1e4u;
    // NOP
    ctx->pc = 0x10a1e8u;
}
