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

// Function: sub_0015C1B0
// Address: 0x15c1b0 - 0x15c268
void sub_0015C1B0_0x15c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C1B0_0x15c1b0");
#endif

    switch (ctx->pc) {
        case 0x15c1ccu: goto label_15c1cc;
        case 0x15c1f8u: goto label_15c1f8;
        case 0x15c208u: goto label_15c208;
        case 0x15c214u: goto label_15c214;
        case 0x15c224u: goto label_15c224;
        case 0x15c22cu: goto label_15c22c;
        case 0x15c238u: goto label_15c238;
        case 0x15c254u: goto label_15c254;
        default: break;
    }

    ctx->pc = 0x15c1b0u;

    // 0x15c1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c1b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15c1b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15c1bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c1c4: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x15C1C4u;
    SET_GPR_U32(ctx, 31, 0x15C1CCu);
    ctx->pc = 0x15C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1C4u;
    // 0x15c1c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x15C1C4u, 0x15C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1CCu;
label_15c1cc:
    // 0x15c1cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15c1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C1D0u;
    {
        const bool branch_taken_0x15c1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1D0u;
        // 0x15c1d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1d0) {
            ctx->pc = 0x15C1ECu;
            goto label_15c1ec;
        }
    }
    ctx->pc = 0x15C1D8u;
    // 0x15c1d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C1D8u;
    {
        const bool branch_taken_0x15c1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1D8u;
        // 0x15c1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1d8) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C1E0u;
    // 0x15c1e0: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x15c1e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C1E4u;
    {
        const bool branch_taken_0x15c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1E4u;
        // 0x15c1e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1e4) {
            ctx->pc = 0x15C200u;
            goto label_15c200;
        }
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c1f0:
    // 0x15c1f0: 0xc05709a  jal         func_15C268
    ctx->pc = 0x15C1F0u;
    SET_GPR_U32(ctx, 31, 0x15C1F8u);
    ctx->pc = 0x15C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1F0u;
    // 0x15c1f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C268u, 0x15C1F0u, 0x15C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1F8u;
label_15c1f8:
    // 0x15c1f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15C1F8u;
    {
        const bool branch_taken_0x15c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F8u;
        // 0x15c1fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f8) {
            ctx->pc = 0x15C258u;
            goto label_15c258;
        }
    }
    ctx->pc = 0x15C200u;
label_15c200:
    // 0x15c200: 0xc057028  jal         func_15C0A0
    ctx->pc = 0x15C200u;
    SET_GPR_U32(ctx, 31, 0x15C208u);
    ctx->pc = 0x15C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C200u;
    // 0x15c204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0A0u, 0x15C200u, 0x15C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C208u;
label_15c208:
    // 0x15c208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c20c: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15C20Cu;
    SET_GPR_U32(ctx, 31, 0x15C214u);
    ctx->pc = 0x15C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C20Cu;
    // 0x15c210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15C20Cu, 0x15C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C214u;
label_15c214:
    // 0x15c214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c21c: 0xc057150  jal         func_15C540
    ctx->pc = 0x15C21Cu;
    SET_GPR_U32(ctx, 31, 0x15C224u);
    ctx->pc = 0x15C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C21Cu;
    // 0x15c220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x15C21Cu, 0x15C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C224u;
label_15c224:
    // 0x15c224: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15C224u;
    SET_GPR_U32(ctx, 31, 0x15C22Cu);
    ctx->pc = 0x15C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C224u;
    // 0x15c228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C224u, 0x15C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C22Cu;
label_15c22c:
    // 0x15c22c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x15c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x15c230: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x15C230u;
    SET_GPR_U32(ctx, 31, 0x15C238u);
    ctx->pc = 0x15C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C230u;
    // 0x15c234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C230u, 0x15C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C238u;
label_15c238:
    // 0x15c238: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15c23c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c240: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x15c240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15c244: 0xb18021  addu        $s0, $a1, $s1
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x15c248: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c24c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15C24Cu;
    SET_GPR_U32(ctx, 31, 0x15C254u);
    ctx->pc = 0x15C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C24Cu;
    // 0x15c250: 0xae020334  sw          $v0, 0x334($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C24Cu, 0x15C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C254u;
label_15c254:
    // 0x15c254: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15c258:
    // 0x15c258: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c260: 0x3e00008  jr          $ra
    ctx->pc = 0x15C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C260u;
        // 0x15c264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C268u;
}
