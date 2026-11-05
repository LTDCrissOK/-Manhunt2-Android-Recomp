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

// Function: sub_003271E0
// Address: 0x3271e0 - 0x327260
void sub_003271E0_0x3271e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003271E0_0x3271e0");
#endif

    switch (ctx->pc) {
        case 0x32720cu: goto label_32720c;
        case 0x32721cu: goto label_32721c;
        case 0x32723cu: goto label_32723c;
        default: break;
    }

    ctx->pc = 0x3271e0u;

    // 0x3271e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3271e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3271e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3271e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3271e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3271e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3271ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3271ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3271f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3271f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3271f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3271f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3271fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3271fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x327200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327204: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x327204u;
    SET_GPR_U32(ctx, 31, 0x32720Cu);
    ctx->pc = 0x327208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327204u;
    // 0x327208: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x327204u, 0x32720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32720Cu;
label_32720c:
    // 0x32720c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32720Cu;
    {
        const bool branch_taken_0x32720c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32720Cu;
        // 0x327210: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32720c) {
            ctx->pc = 0x327244u;
            goto label_327244;
        }
    }
    ctx->pc = 0x327214u;
    // 0x327214: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x327214u;
    SET_GPR_U32(ctx, 31, 0x32721Cu);
    ctx->pc = 0x327218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327214u;
    // 0x327218: 0x240404ac  addiu       $a0, $zero, 0x4AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x327214u, 0x32721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32721Cu;
label_32721c:
    // 0x32721c: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x32721cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x327220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327224: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x327224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x327228: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32722c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x32722cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x327230: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x327230u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327234: 0xc0cdb4e  jal         func_336D38
    ctx->pc = 0x327234u;
    SET_GPR_U32(ctx, 31, 0x32723Cu);
    ctx->pc = 0x327238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327234u;
    // 0x327238: 0x96090002  lhu         $t1, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D38u, 0x327234u, 0x32723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32723Cu;
label_32723c:
    // 0x32723c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32723cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327240: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x327240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327244:
    // 0x327244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32724c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32724cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327250: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x327250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327254: 0x3e00008  jr          $ra
    ctx->pc = 0x327254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327254u;
        // 0x327258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32725Cu;
    // 0x32725c: 0x0  nop
    ctx->pc = 0x32725cu;
    // NOP
    ctx->pc = 0x327260u;
}
