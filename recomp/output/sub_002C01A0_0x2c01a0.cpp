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

// Function: sub_002C01A0
// Address: 0x2c01a0 - 0x2c0258
void sub_002C01A0_0x2c01a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C01A0_0x2c01a0");
#endif

    switch (ctx->pc) {
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01e0u: goto label_2c01e0;
        case 0x2c01f0u: goto label_2c01f0;
        case 0x2c01f8u: goto label_2c01f8;
        case 0x2c0228u: goto label_2c0228;
        default: break;
    }

    ctx->pc = 0x2c01a0u;

    // 0x2c01a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c01a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c01a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c01a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c01a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c01a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c01ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c01b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c01b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c01b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c01bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c01c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c01c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c01c8: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C01C8u;
    SET_GPR_U32(ctx, 31, 0x2C01D0u);
    ctx->pc = 0x2C01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01C8u;
    // 0x2c01cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C01C8u, 0x2C01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01D0u;
label_2c01d0:
    // 0x2c01d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c01d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c01d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d8: 0xc0b002c  jal         func_2C00B0
    ctx->pc = 0x2C01D8u;
    SET_GPR_U32(ctx, 31, 0x2C01E0u);
    ctx->pc = 0x2C01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01D8u;
    // 0x2c01dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C00B0u, 0x2C01D8u, 0x2C01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01E0u;
label_2c01e0:
    // 0x2c01e0: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x2c01e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c01e4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C01E4u;
    {
        const bool branch_taken_0x2c01e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01E4u;
        // 0x2c01e8: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01e4) {
            ctx->pc = 0x2C0238u;
            goto label_2c0238;
        }
    }
    ctx->pc = 0x2C01ECu;
    // 0x2c01ec: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2c01ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2c01f0:
    // 0x2c01f0: 0xc0fa3a2  jal         func_3E8E88
    ctx->pc = 0x2C01F0u;
    SET_GPR_U32(ctx, 31, 0x2C01F8u);
    ctx->pc = 0x2C01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01F0u;
    // 0x2c01f4: 0x266450a4  addiu       $a0, $s3, 0x50A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8E88u, 0x2C01F0u, 0x2C01F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01F8u;
label_2c01f8:
    // 0x2c01f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c01fc: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2c01fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c0200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c0204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c0208: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c0208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c020c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c020cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0210: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c0214: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x2c0214u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c0218: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c0218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c021c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c021cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0220: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0220u;
    SET_GPR_U32(ctx, 31, 0x2C0228u);
    ctx->pc = 0x2C0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0220u;
    // 0x2c0224: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0220u, 0x2C0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0228u;
label_2c0228:
    // 0x2c0228: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x2c0228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c022c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2c022cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0230: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0230u;
            // 0x2c0234: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C01F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c01f0;
        }
    }
    ctx->pc = 0x2C0238u;
label_2c0238:
    // 0x2c0238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c0238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c023c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c023cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0240: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0244: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c0244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c0248: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c024c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C024Cu;
        // 0x2c0250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C024Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0254u;
    // 0x2c0254: 0x0  nop
    ctx->pc = 0x2c0254u;
    // NOP
    ctx->pc = 0x2c0258u;
}
