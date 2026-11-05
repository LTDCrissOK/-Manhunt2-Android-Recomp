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

// Function: sub_00164458
// Address: 0x164458 - 0x1644c0
void sub_00164458_0x164458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164458_0x164458");
#endif

    switch (ctx->pc) {
        case 0x164474u: goto label_164474;
        case 0x16447cu: goto label_16447c;
        case 0x164488u: goto label_164488;
        case 0x164490u: goto label_164490;
        case 0x1644a0u: goto label_1644a0;
        case 0x1644a8u: goto label_1644a8;
        default: break;
    }

    ctx->pc = 0x164458u;

    // 0x164458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16445c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16446c: 0xc059208  jal         func_164820
    ctx->pc = 0x16446Cu;
    SET_GPR_U32(ctx, 31, 0x164474u);
    ctx->pc = 0x164470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16446Cu;
    // 0x164470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164820u, 0x16446Cu, 0x164474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164474u;
label_164474:
    // 0x164474: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x164474u;
    SET_GPR_U32(ctx, 31, 0x16447Cu);
    ctx->pc = 0x164478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164474u;
    // 0x164478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x164474u, 0x16447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16447Cu;
label_16447c:
    // 0x16447c: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x16447cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x164480: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x164480u;
    SET_GPR_U32(ctx, 31, 0x164488u);
    ctx->pc = 0x164484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164480u;
    // 0x164484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x164480u, 0x164488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164488u;
label_164488:
    // 0x164488: 0xc059812  jal         func_166048
    ctx->pc = 0x164488u;
    SET_GPR_U32(ctx, 31, 0x164490u);
    ctx->pc = 0x16448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164488u;
    // 0x16448c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166048u, 0x164488u, 0x164490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164490u;
label_164490:
    // 0x164490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164498: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x164498u;
    SET_GPR_U32(ctx, 31, 0x1644A0u);
    ctx->pc = 0x16449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164498u;
    // 0x16449c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x164498u, 0x1644A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644A0u;
label_1644a0:
    // 0x1644a0: 0xc059892  jal         func_166248
    ctx->pc = 0x1644A0u;
    SET_GPR_U32(ctx, 31, 0x1644A8u);
    ctx->pc = 0x1644A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1644A0u;
    // 0x1644a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166248u, 0x1644A0u, 0x1644A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644A8u;
label_1644a8:
    // 0x1644a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1644a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1644ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1644acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1644b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1644b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1644b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1644B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1644B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1644BCu;
    // 0x1644bc: 0x0  nop
    ctx->pc = 0x1644bcu;
    // NOP
    ctx->pc = 0x1644c0u;
}
