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

// Function: sub_0028B9B0
// Address: 0x28b9b0 - 0x28ba60
void sub_0028B9B0_0x28b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B9B0_0x28b9b0");
#endif

    switch (ctx->pc) {
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba3cu: goto label_28ba3c;
        default: break;
    }

    ctx->pc = 0x28b9b0u;

    // 0x28b9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b9b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b9bc: 0x8c44a7b4  lw          $a0, -0x584C($v0)
    ctx->pc = 0x28b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA7B4u));
    // 0x28b9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28b9c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28b9cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B9CCu;
    {
        const bool branch_taken_0x28b9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9CCu;
        // 0x28b9d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9cc) {
            ctx->pc = 0x28B9E4u;
            goto label_28b9e4;
        }
    }
    ctx->pc = 0x28B9D4u;
    // 0x28b9d4: 0xc0d99b2  jal         func_3666C8
    ctx->pc = 0x28B9D4u;
    SET_GPR_U32(ctx, 31, 0x28B9DCu);
    ctx->pc = 0x28B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9D4u;
    // 0x28b9d8: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3666C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3666C8u, 0x28B9D4u, 0x28B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9DCu;
label_28b9dc:
    // 0x28b9dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28B9DCu;
    {
        const bool branch_taken_0x28b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9DCu;
        // 0x28b9e0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9dc) {
            ctx->pc = 0x28BA00u;
            goto label_28ba00;
        }
    }
    ctx->pc = 0x28B9E4u;
label_28b9e4:
    // 0x28b9e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b9e8: 0x8c44a7b8  lw          $a0, -0x5848($v0)
    ctx->pc = 0x28b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA7B8u));
    // 0x28b9ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B9ECu;
    {
        const bool branch_taken_0x28b9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9ECu;
        // 0x28b9f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9ec) {
            ctx->pc = 0x28B9FCu;
            goto label_28b9fc;
        }
    }
    ctx->pc = 0x28B9F4u;
    // 0x28b9f4: 0xc0d99ba  jal         func_3666E8
    ctx->pc = 0x28B9F4u;
    SET_GPR_U32(ctx, 31, 0x28B9FCu);
    ctx->pc = 0x3666E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3666E8u, 0x28B9F4u, 0x28B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9FCu;
label_28b9fc:
    // 0x28b9fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28ba00:
    // 0x28ba00: 0xae00a7b4  sw          $zero, -0x584C($s0)
    ctx->pc = 0x28ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944692), GPR_U32(ctx, 0));
    // 0x28ba04: 0x8c44a7bc  lw          $a0, -0x5844($v0)
    ctx->pc = 0x28ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944700)));
    // 0x28ba08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ba08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BA0Cu;
    {
        const bool branch_taken_0x28ba0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA0Cu;
        // 0x28ba10: 0xae40a7b8  sw          $zero, -0x5848($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294944696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba0c) {
            ctx->pc = 0x28BA24u;
            goto label_28ba24;
        }
    }
    ctx->pc = 0x28BA14u;
    // 0x28ba14: 0xc0d99b2  jal         func_3666C8
    ctx->pc = 0x28BA14u;
    SET_GPR_U32(ctx, 31, 0x28BA1Cu);
    ctx->pc = 0x28BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA14u;
    // 0x28ba18: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3666C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3666C8u, 0x28BA14u, 0x28BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA1Cu;
    {
        const bool branch_taken_0x28ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA1Cu;
        // 0x28ba20: 0xae20a7bc  sw          $zero, -0x5844($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294944700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba1c) {
            ctx->pc = 0x28BA40u;
            goto label_28ba40;
        }
    }
    ctx->pc = 0x28BA24u;
label_28ba24:
    // 0x28ba24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28ba28: 0x8c44a7c0  lw          $a0, -0x5840($v0)
    ctx->pc = 0x28ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA7C0u));
    // 0x28ba2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA2Cu;
    {
        const bool branch_taken_0x28ba2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA2Cu;
        // 0x28ba30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba2c) {
            ctx->pc = 0x28BA3Cu;
            goto label_28ba3c;
        }
    }
    ctx->pc = 0x28BA34u;
    // 0x28ba34: 0xc0d99ba  jal         func_3666E8
    ctx->pc = 0x28BA34u;
    SET_GPR_U32(ctx, 31, 0x28BA3Cu);
    ctx->pc = 0x3666E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3666E8u, 0x28BA34u, 0x28BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA3Cu;
label_28ba3c:
    // 0x28ba3c: 0xae20a7bc  sw          $zero, -0x5844($s1)
    ctx->pc = 0x28ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944700), GPR_U32(ctx, 0));
label_28ba40:
    // 0x28ba40: 0xae00a7c0  sw          $zero, -0x5840($s0)
    ctx->pc = 0x28ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944704), GPR_U32(ctx, 0));
    // 0x28ba44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ba44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ba48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ba48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ba4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28ba4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ba50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28ba54: 0x3e00008  jr          $ra
    ctx->pc = 0x28BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA54u;
        // 0x28ba58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BA5Cu;
    // 0x28ba5c: 0x0  nop
    ctx->pc = 0x28ba5cu;
    // NOP
    ctx->pc = 0x28ba60u;
}
