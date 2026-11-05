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

// Function: sub_00137230
// Address: 0x137230 - 0x1372e8
void sub_00137230_0x137230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137230_0x137230");
#endif

    switch (ctx->pc) {
        case 0x137274u: goto label_137274;
        case 0x137288u: goto label_137288;
        case 0x137298u: goto label_137298;
        case 0x1372a4u: goto label_1372a4;
        case 0x1372c4u: goto label_1372c4;
        default: break;
    }

    ctx->pc = 0x137230u;

    // 0x137230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x137238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13723c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13723cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x137240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x137244: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x137244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137248: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x137248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13724c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13724cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137254: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x137254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x137258: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x137258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13725c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13725Cu;
    {
        const bool branch_taken_0x13725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13725Cu;
        // 0x137260: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13725c) {
            ctx->pc = 0x1372C4u;
            goto label_1372c4;
        }
    }
    ctx->pc = 0x137264u;
    // 0x137264: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x137264u;
    {
        const bool branch_taken_0x137264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x137268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137264u;
        // 0x137268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137264) {
            ctx->pc = 0x1372C8u;
            goto label_1372c8;
        }
    }
    ctx->pc = 0x13726Cu;
    // 0x13726c: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x13726Cu;
    SET_GPR_U32(ctx, 31, 0x137274u);
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x13726Cu, 0x137274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137274u;
label_137274:
    // 0x137274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137278: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x137278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13727c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137280: 0xc045612  jal         func_115848
    ctx->pc = 0x137280u;
    SET_GPR_U32(ctx, 31, 0x137288u);
    ctx->pc = 0x137284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137280u;
    // 0x137284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x137280u, 0x137288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137288u;
label_137288:
    // 0x137288: 0x8e220464  lw          $v0, 0x464($s1)
    ctx->pc = 0x137288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x13728c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137290: 0xc045642  jal         func_115908
    ctx->pc = 0x137290u;
    SET_GPR_U32(ctx, 31, 0x137298u);
    ctx->pc = 0x137294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137290u;
    // 0x137294: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x137290u, 0x137298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137298u;
label_137298:
    // 0x137298: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x137298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13729c: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13729Cu;
    SET_GPR_U32(ctx, 31, 0x1372A4u);
    ctx->pc = 0x1372A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13729Cu;
    // 0x1372a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13729Cu, 0x1372A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372A4u;
label_1372a4:
    // 0x1372a4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1372a8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1372a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1372ac: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1372acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1372b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1372b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1372b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1372b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372bc: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x1372BCu;
    SET_GPR_U32(ctx, 31, 0x1372C4u);
    ctx->pc = 0x1372C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372BCu;
    // 0x1372c0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x1372BCu, 0x1372C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372C4u;
label_1372c4:
    // 0x1372c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1372c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1372c8:
    // 0x1372c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1372c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1372cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1372ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1372d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1372d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1372d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1372d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1372d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1372d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1372dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1372DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1372E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372DCu;
        // 0x1372e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1372DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1372E4u;
    // 0x1372e4: 0x0  nop
    ctx->pc = 0x1372e4u;
    // NOP
    ctx->pc = 0x1372e8u;
}
