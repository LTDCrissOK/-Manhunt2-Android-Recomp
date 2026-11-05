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

// Function: sub_00165928
// Address: 0x165928 - 0x1659c0
void sub_00165928_0x165928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165928_0x165928");
#endif

    switch (ctx->pc) {
        case 0x165958u: goto label_165958;
        case 0x16597cu: goto label_16597c;
        case 0x165988u: goto label_165988;
        default: break;
    }

    ctx->pc = 0x165928u;

    // 0x165928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16592c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16593c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165944: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165948: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x16594c: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165950: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165954: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165958:
    // 0x165958: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16595c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165960: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x165960u;
    {
        const bool branch_taken_0x165960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165960u;
        // 0x165964: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165960) {
            ctx->pc = 0x165990u;
            goto label_165990;
        }
    }
    ctx->pc = 0x165968u;
    // 0x165968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16596c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x16596Cu;
    {
        const bool branch_taken_0x16596c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x165970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16596Cu;
        // 0x165970: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16596c) {
            ctx->pc = 0x165994u;
            goto label_165994;
        }
    }
    ctx->pc = 0x165974u;
    // 0x165974: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165974u;
    SET_GPR_U32(ctx, 31, 0x16597Cu);
    ctx->pc = 0x165978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165974u;
    // 0x165978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165974u, 0x16597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16597Cu;
label_16597c:
    // 0x16597c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165980: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165980u;
    SET_GPR_U32(ctx, 31, 0x165988u);
    ctx->pc = 0x165984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165980u;
    // 0x165984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165980u, 0x165988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165988u;
label_165988:
    // 0x165988: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165988u;
    {
        const bool branch_taken_0x165988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165988u;
        // 0x16598c: 0xae120304  sw          $s2, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165988) {
            ctx->pc = 0x1659A4u;
            goto label_1659a4;
        }
    }
    ctx->pc = 0x165990u;
label_165990:
    // 0x165990: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165994:
    // 0x165994: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165998: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16599c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16599Cu;
    {
        const bool branch_taken_0x16599c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16599Cu;
        // 0x1659a0: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16599c) {
            ctx->pc = 0x165958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165958;
        }
    }
    ctx->pc = 0x1659A4u;
label_1659a4:
    // 0x1659a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1659a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1659a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1659a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1659ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1659acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1659b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1659b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1659b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1659B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659B4u;
        // 0x1659b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1659B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1659BCu;
    // 0x1659bc: 0x0  nop
    ctx->pc = 0x1659bcu;
    // NOP
    ctx->pc = 0x1659c0u;
}
