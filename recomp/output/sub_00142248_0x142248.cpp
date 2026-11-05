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

// Function: sub_00142248
// Address: 0x142248 - 0x1422e0
void sub_00142248_0x142248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142248_0x142248");
#endif

    switch (ctx->pc) {
        case 0x142284u: goto label_142284;
        case 0x142290u: goto label_142290;
        case 0x1422a0u: goto label_1422a0;
        case 0x1422acu: goto label_1422ac;
        case 0x1422c0u: goto label_1422c0;
        default: break;
    }

    ctx->pc = 0x142248u;

    // 0x142248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14224c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x142250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x142254: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x142254u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x142258: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x142258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14225c: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x14225cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x142260: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x142260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x142264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x142264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142268: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x142268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14226c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x14226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x142270: 0x8c500b18  lw          $s0, 0xB18($v0)
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2840)));
    // 0x142274: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x142274u;
    {
        const bool branch_taken_0x142274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142274u;
        // 0x142278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142274) {
            ctx->pc = 0x1422C4u;
            goto label_1422c4;
        }
    }
    ctx->pc = 0x14227Cu;
    // 0x14227c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14227Cu;
    SET_GPR_U32(ctx, 31, 0x142284u);
    ctx->pc = 0x142280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14227Cu;
    // 0x142280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14227Cu, 0x142284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142284u;
label_142284:
    // 0x142284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142288: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x142288u;
    SET_GPR_U32(ctx, 31, 0x142290u);
    ctx->pc = 0x14228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142288u;
    // 0x14228c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x142288u, 0x142290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142290u;
label_142290:
    // 0x142290: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142290u;
    {
        const bool branch_taken_0x142290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142290u;
        // 0x142294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142290) {
            ctx->pc = 0x1422B4u;
            goto label_1422b4;
        }
    }
    ctx->pc = 0x142298u;
    // 0x142298: 0xc05088c  jal         func_142230
    ctx->pc = 0x142298u;
    SET_GPR_U32(ctx, 31, 0x1422A0u);
    ctx->pc = 0x14229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142298u;
    // 0x14229c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142230u, 0x142298u, 0x1422A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422A0u;
label_1422a0:
    // 0x1422a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422a4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1422A4u;
    SET_GPR_U32(ctx, 31, 0x1422ACu);
    ctx->pc = 0x1422A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422A4u;
    // 0x1422a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1422A4u, 0x1422ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422ACu;
label_1422ac:
    // 0x1422ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1422ACu;
    {
        const bool branch_taken_0x1422ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422ACu;
        // 0x1422b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422ac) {
            ctx->pc = 0x1422C4u;
            goto label_1422c4;
        }
    }
    ctx->pc = 0x1422B4u;
label_1422b4:
    // 0x1422b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1422b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422b8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1422B8u;
    SET_GPR_U32(ctx, 31, 0x1422C0u);
    ctx->pc = 0x1422BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422B8u;
    // 0x1422bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1422B8u, 0x1422C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422C0u;
label_1422c0:
    // 0x1422c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1422c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1422c4:
    // 0x1422c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1422c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1422c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1422cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1422ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1422d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1422d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1422d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1422D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1422D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422D4u;
        // 0x1422d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1422D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1422DCu;
    // 0x1422dc: 0x0  nop
    ctx->pc = 0x1422dcu;
    // NOP
    ctx->pc = 0x1422e0u;
}
