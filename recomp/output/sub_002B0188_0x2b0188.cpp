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

// Function: sub_002B0188
// Address: 0x2b0188 - 0x2b0208
void sub_002B0188_0x2b0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0188_0x2b0188");
#endif

    switch (ctx->pc) {
        case 0x2b01b0u: goto label_2b01b0;
        case 0x2b01ccu: goto label_2b01cc;
        default: break;
    }

    ctx->pc = 0x2b0188u;

    // 0x2b0188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b0188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b018c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b0190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b0190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b0194: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b0198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b0198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b019c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b01a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b01a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b01a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b01a8: 0x2453ac18  addiu       $s3, $v0, -0x53E8
    ctx->pc = 0x2b01a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945816));
    // 0x2b01ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b01b0:
    // 0x2b01b0: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x2b01b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b01b4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2b01b4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2b01b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b01c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b01c4: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x2B01C4u;
    SET_GPR_U32(ctx, 31, 0x2B01CCu);
    ctx->pc = 0x2B01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01C4u;
    // 0x2b01c8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x2B01C4u, 0x2B01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01CCu;
label_2b01cc:
    // 0x2b01cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B01CCu;
    {
        const bool branch_taken_0x2b01cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01CCu;
        // 0x2b01d0: 0x66310001  daddiu      $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01cc) {
            ctx->pc = 0x2B01DCu;
            goto label_2b01dc;
        }
    }
    ctx->pc = 0x2B01D4u;
    // 0x2b01d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B01D4u;
    {
        const bool branch_taken_0x2b01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D4u;
        // 0x2b01d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01d4) {
            ctx->pc = 0x2B01E8u;
            goto label_2b01e8;
        }
    }
    ctx->pc = 0x2B01DCu;
label_2b01dc:
    // 0x2b01dc: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2b01dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b01e0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B01E0u;
    {
        const bool branch_taken_0x2b01e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01E0u;
        // 0x2b01e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01e0) {
            ctx->pc = 0x2B01B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b01b0;
        }
    }
    ctx->pc = 0x2B01E8u;
label_2b01e8:
    // 0x2b01e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b01e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b01ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b01ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b01f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b01f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b01f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b01f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b01f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b01f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b01fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B01FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01FCu;
        // 0x2b0200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0204u;
    // 0x2b0204: 0x0  nop
    ctx->pc = 0x2b0204u;
    // NOP
    ctx->pc = 0x2b0208u;
}
