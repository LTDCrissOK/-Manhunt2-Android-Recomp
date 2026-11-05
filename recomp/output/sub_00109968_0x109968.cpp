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

// Function: sub_00109968
// Address: 0x109968 - 0x1099e8
void sub_00109968_0x109968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109968_0x109968");
#endif

    switch (ctx->pc) {
        case 0x109990u: goto label_109990;
        case 0x1099a8u: goto label_1099a8;
        case 0x1099c0u: goto label_1099c0;
        default: break;
    }

    ctx->pc = 0x109968u;

    // 0x109968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10996c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x109970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109978: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10997c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109980: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x109980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x109984: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x109984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109988: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109988u;
    SET_GPR_U32(ctx, 31, 0x109990u);
    ctx->pc = 0x10998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109988u;
    // 0x10998c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109988u, 0x109990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109990u;
label_109990:
    // 0x109990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109994: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x109998: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109998u;
    {
        const bool branch_taken_0x109998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109998u;
        // 0x10999c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109998) {
            ctx->pc = 0x1099CCu;
            goto label_1099cc;
        }
    }
    ctx->pc = 0x1099A0u;
    // 0x1099a0: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x1099A0u;
    SET_GPR_U32(ctx, 31, 0x1099A8u);
    ctx->pc = 0x1099A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099A0u;
    // 0x1099a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x1099A0u, 0x1099A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099A8u;
label_1099a8:
    // 0x1099a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1099a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1099b0: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1099B0u;
    {
        const bool branch_taken_0x1099b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1099B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099B0u;
        // 0x1099b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099b0) {
            ctx->pc = 0x1099C8u;
            goto label_1099c8;
        }
    }
    ctx->pc = 0x1099B8u;
    // 0x1099b8: 0xc04362e  jal         func_10D8B8
    ctx->pc = 0x1099B8u;
    SET_GPR_U32(ctx, 31, 0x1099C0u);
    ctx->pc = 0x1099BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099B8u;
    // 0x1099bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8B8u, 0x1099B8u, 0x1099C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099C0u;
label_1099c0:
    // 0x1099c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1099C0u;
    {
        const bool branch_taken_0x1099c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099C0u;
        // 0x1099c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099c0) {
            ctx->pc = 0x1099CCu;
            goto label_1099cc;
        }
    }
    ctx->pc = 0x1099C8u;
label_1099c8:
    // 0x1099c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1099c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1099cc:
    // 0x1099cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1099ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1099d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1099d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1099d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1099d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1099d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1099d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1099dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1099DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1099E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099DCu;
        // 0x1099e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1099DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1099E4u;
    // 0x1099e4: 0x0  nop
    ctx->pc = 0x1099e4u;
    // NOP
    ctx->pc = 0x1099e8u;
}
