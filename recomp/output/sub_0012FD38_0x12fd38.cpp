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

// Function: sub_0012FD38
// Address: 0x12fd38 - 0x12fdf0
void sub_0012FD38_0x12fd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FD38_0x12fd38");
#endif

    switch (ctx->pc) {
        case 0x12fd68u: goto label_12fd68;
        case 0x12fd78u: goto label_12fd78;
        case 0x12fda4u: goto label_12fda4;
        case 0x12fdd0u: goto label_12fdd0;
        default: break;
    }

    ctx->pc = 0x12fd38u;

    // 0x12fd38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fd44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12fd48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12fd48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12fd50: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12fd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12fd58: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x12fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x12fd5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12fd5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd60: 0xc047866  jal         func_11E198
    ctx->pc = 0x12FD60u;
    SET_GPR_U32(ctx, 31, 0x12FD68u);
    ctx->pc = 0x12FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD60u;
    // 0x12fd64: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12FD60u, 0x12FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD68u;
label_12fd68:
    // 0x12fd68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd6c: 0x8e500ff0  lw          $s0, 0xFF0($s2)
    ctx->pc = 0x12fd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x12fd70: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x12FD70u;
    SET_GPR_U32(ctx, 31, 0x12FD78u);
    ctx->pc = 0x12FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD70u;
    // 0x12fd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x12FD70u, 0x12FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD78u;
label_12fd78:
    // 0x12fd78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FD78u;
    {
        const bool branch_taken_0x12fd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd78) {
            ctx->pc = 0x12FD88u;
            goto label_12fd88;
        }
    }
    ctx->pc = 0x12FD80u;
    // 0x12fd80: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x12fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x12fd84: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x12fd84u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12fd88:
    // 0x12fd88: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x12FD88u;
    {
        const bool branch_taken_0x12fd88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD88u;
        // 0x12fd8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd88) {
            ctx->pc = 0x12FDD0u;
            goto label_12fdd0;
        }
    }
    ctx->pc = 0x12FD90u;
    // 0x12fd90: 0x8e440ff4  lw          $a0, 0xFF4($s2)
    ctx->pc = 0x12fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4084)));
    // 0x12fd94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FD94u;
    {
        const bool branch_taken_0x12fd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD94u;
        // 0x12fd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd94) {
            ctx->pc = 0x12FDA4u;
            goto label_12fda4;
        }
    }
    ctx->pc = 0x12FD9Cu;
    // 0x12fd9c: 0xc0619d2  jal         func_186748
    ctx->pc = 0x12FD9Cu;
    SET_GPR_U32(ctx, 31, 0x12FDA4u);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x12FD9Cu, 0x12FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDA4u;
label_12fda4:
    // 0x12fda4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FDA4u;
    {
        const bool branch_taken_0x12fda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDA4u;
        // 0x12fda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fda4) {
            ctx->pc = 0x12FDBCu;
            goto label_12fdbc;
        }
    }
    ctx->pc = 0x12FDACu;
    // 0x12fdac: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12fdb0: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12fdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12FDB4u;
    {
        const bool branch_taken_0x12fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDB4u;
        // 0x12fdb8: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdb4) {
            ctx->pc = 0x12FDC8u;
            goto label_12fdc8;
        }
    }
    ctx->pc = 0x12FDBCu;
label_12fdbc:
    // 0x12fdbc: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x12fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x12fdc0: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x12fdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12fdc4: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x12fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_12fdc8:
    // 0x12fdc8: 0xc04bf24  jal         func_12FC90
    ctx->pc = 0x12FDC8u;
    SET_GPR_U32(ctx, 31, 0x12FDD0u);
    ctx->pc = 0x12FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC90u, 0x12FDC8u, 0x12FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD0u;
label_12fdd0:
    // 0x12fdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fdd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fdd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fdd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12fdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12fddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12fde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x12FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDE4u;
        // 0x12fde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FDECu;
    // 0x12fdec: 0x0  nop
    ctx->pc = 0x12fdecu;
    // NOP
    ctx->pc = 0x12fdf0u;
}
