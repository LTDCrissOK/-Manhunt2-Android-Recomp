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

// Function: sub_003E14C0
// Address: 0x3e14c0 - 0x3e1538
void sub_003E14C0_0x3e14c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E14C0_0x3e14c0");
#endif

    switch (ctx->pc) {
        case 0x3e14f8u: goto label_3e14f8;
        case 0x3e150cu: goto label_3e150c;
        case 0x3e1520u: goto label_3e1520;
        default: break;
    }

    ctx->pc = 0x3e14c0u;

    // 0x3e14c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e14c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e14c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e14c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e14c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e14cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e14d0: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x3e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3e14d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e14d8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e14d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e14dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e14dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e14e0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e14e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e14e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E14E4u;
    {
        const bool branch_taken_0x3e14e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14E4u;
        // 0x3e14e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e14e4) {
            ctx->pc = 0x3E1514u;
            goto label_3e1514;
        }
    }
    ctx->pc = 0x3E14ECu;
    // 0x3e14ec: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x3e14ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3e14f0: 0xc0f84a0  jal         func_3E1280
    ctx->pc = 0x3E14F0u;
    SET_GPR_U32(ctx, 31, 0x3E14F8u);
    ctx->pc = 0x3E14F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E14F0u;
    // 0x3e14f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1280u, 0x3E14F0u, 0x3E14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14F8u;
label_3e14f8:
    // 0x3e14f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e14fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1500: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3e1500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1504: 0xc0f8512  jal         func_3E1448
    ctx->pc = 0x3E1504u;
    SET_GPR_U32(ctx, 31, 0x3E150Cu);
    ctx->pc = 0x3E1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1504u;
    // 0x3e1508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1448u, 0x3E1504u, 0x3E150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E150Cu;
label_3e150c:
    // 0x3e150c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E150Cu;
    {
        const bool branch_taken_0x3e150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E150Cu;
        // 0x3e1510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e150c) {
            ctx->pc = 0x3E1524u;
            goto label_3e1524;
        }
    }
    ctx->pc = 0x3E1514u;
label_3e1514:
    // 0x3e1514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e1514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1518: 0xc0f84a0  jal         func_3E1280
    ctx->pc = 0x3E1518u;
    SET_GPR_U32(ctx, 31, 0x3E1520u);
    ctx->pc = 0x3E151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1518u;
    // 0x3e151c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1280u, 0x3E1518u, 0x3E1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1520u;
label_3e1520:
    // 0x3e1520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1524:
    // 0x3e1524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e1528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e152c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e1530: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1530u;
        // 0x3e1534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1538u;
}
