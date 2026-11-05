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

// Function: sub_00109FB0
// Address: 0x109fb0 - 0x10a048
void sub_00109FB0_0x109fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109FB0_0x109fb0");
#endif

    switch (ctx->pc) {
        case 0x109fd4u: goto label_109fd4;
        case 0x10a010u: goto label_10a010;
        case 0x10a020u: goto label_10a020;
        default: break;
    }

    ctx->pc = 0x109fb0u;

    // 0x109fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109fc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x109fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x109fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x109fcc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109FCCu;
    SET_GPR_U32(ctx, 31, 0x109FD4u);
    ctx->pc = 0x109FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FCCu;
    // 0x109fd0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109FCCu, 0x109FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FD4u;
label_109fd4:
    // 0x109fd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fd8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x109fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x109fdc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x109FDCu;
    {
        const bool branch_taken_0x109fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FDCu;
        // 0x109fe0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fdc) {
            ctx->pc = 0x10A028u;
            goto label_10a028;
        }
    }
    ctx->pc = 0x109FE4u;
    // 0x109fe4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109fe8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109fec: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x109fecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109ff0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x109ff4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109FF4u;
    {
        const bool branch_taken_0x109ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FF4u;
        // 0x109ff8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ff4) {
            ctx->pc = 0x10A004u;
            goto label_10a004;
        }
    }
    ctx->pc = 0x109FFCu;
    // 0x109ffc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x109FFCu;
    {
        const bool branch_taken_0x109ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FFCu;
        // 0x10a000: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ffc) {
            ctx->pc = 0x10A02Cu;
            goto label_10a02c;
        }
    }
    ctx->pc = 0x10A004u;
label_10a004:
    // 0x10a004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a008: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A008u;
    SET_GPR_U32(ctx, 31, 0x10A010u);
    ctx->pc = 0x10A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A008u;
    // 0x10a00c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A008u, 0x10A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A010u;
label_10a010:
    // 0x10a010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a018: 0xc044110  jal         func_110440
    ctx->pc = 0x10A018u;
    SET_GPR_U32(ctx, 31, 0x10A020u);
    ctx->pc = 0x10A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A018u;
    // 0x10a01c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110440u, 0x10A018u, 0x10A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A020u;
label_10a020:
    // 0x10a020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A020u;
    {
        const bool branch_taken_0x10a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A020u;
        // 0x10a024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a020) {
            ctx->pc = 0x10A02Cu;
            goto label_10a02c;
        }
    }
    ctx->pc = 0x10A028u;
label_10a028:
    // 0x10a028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a02c:
    // 0x10a02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A03Cu;
        // 0x10a040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A044u;
    // 0x10a044: 0x0  nop
    ctx->pc = 0x10a044u;
    // NOP
    ctx->pc = 0x10a048u;
}
