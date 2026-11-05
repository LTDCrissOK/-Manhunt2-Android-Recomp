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

// Function: sub_00177930
// Address: 0x177930 - 0x1779f0
void sub_00177930_0x177930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177930_0x177930");
#endif

    switch (ctx->pc) {
        case 0x17796cu: goto label_17796c;
        case 0x177990u: goto label_177990;
        case 0x1779acu: goto label_1779ac;
        default: break;
    }

    ctx->pc = 0x177930u;

    // 0x177930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17793c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17793cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17794c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x177950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177954: 0x92020158  lbu         $v0, 0x158($s0)
    ctx->pc = 0x177954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x177958: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177958u;
    {
        const bool branch_taken_0x177958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177958u;
        // 0x17795c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177958) {
            ctx->pc = 0x1779C8u;
            goto label_1779c8;
        }
    }
    ctx->pc = 0x177960u;
    // 0x177960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177964: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x177964u;
    SET_GPR_U32(ctx, 31, 0x17796Cu);
    ctx->pc = 0x177968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177964u;
    // 0x177968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x177964u, 0x17796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17796Cu;
label_17796c:
    // 0x17796c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x17796cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x177970: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177970u;
    {
        const bool branch_taken_0x177970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x177974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177970u;
        // 0x177974: 0x261400dc  addiu       $s4, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177970) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x177978u;
    // 0x177978: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x177978u;
    {
        const bool branch_taken_0x177978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177978u;
        // 0x17797c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177978) {
            ctx->pc = 0x1779CCu;
            goto label_1779cc;
        }
    }
    ctx->pc = 0x177980u;
label_177980:
    // 0x177980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177984: 0x261300d8  addiu       $s3, $s0, 0xD8
    ctx->pc = 0x177984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x177988: 0x24150021  addiu       $s5, $zero, 0x21
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17798c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x17798cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_177990:
    // 0x177990: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x177990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x177994: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177998: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x177998u;
    {
        const bool branch_taken_0x177998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x17799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177998u;
        // 0x17799c: 0x2831021  addu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177998) {
            ctx->pc = 0x1779B4u;
            goto label_1779b4;
        }
    }
    ctx->pc = 0x1779A0u;
    // 0x1779a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1779a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779a4: 0xc05e3f6  jal         func_178FD8
    ctx->pc = 0x1779A4u;
    SET_GPR_U32(ctx, 31, 0x1779ACu);
    ctx->pc = 0x1779A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779A4u;
    // 0x1779a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x1779A4u, 0x1779ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779ACu;
label_1779ac:
    // 0x1779ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1779ACu;
    {
        const bool branch_taken_0x1779ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1779B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779ACu;
        // 0x1779b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779ac) {
            ctx->pc = 0x1779CCu;
            goto label_1779cc;
        }
    }
    ctx->pc = 0x1779B4u;
label_1779b4:
    // 0x1779b4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1779b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1779b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1779bc: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1779bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1779c0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1779C0u;
    {
        const bool branch_taken_0x1779c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1779C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779C0u;
        // 0x1779c4: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779c0) {
            ctx->pc = 0x177990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177990;
        }
    }
    ctx->pc = 0x1779C8u;
label_1779c8:
    // 0x1779c8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1779c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1779cc:
    // 0x1779cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1779ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1779d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1779d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1779d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1779d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1779d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1779dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1779dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1779e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1779e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1779e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1779e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1779e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1779E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1779ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779E8u;
        // 0x1779ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1779F0u;
}
