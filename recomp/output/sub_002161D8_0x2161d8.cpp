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

// Function: sub_002161D8
// Address: 0x2161d8 - 0x2162a0
void sub_002161D8_0x2161d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002161D8_0x2161d8");
#endif

    switch (ctx->pc) {
        case 0x216200u: goto label_216200;
        case 0x21621cu: goto label_21621c;
        case 0x216234u: goto label_216234;
        case 0x21624cu: goto label_21624c;
        case 0x216288u: goto label_216288;
        case 0x216290u: goto label_216290;
        default: break;
    }

    ctx->pc = 0x2161d8u;

    // 0x2161d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2161d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2161dc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2161dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2161e0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2161e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2161e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2161e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161e8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2161e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2161ec: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2161ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2161f0: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2161F0u;
    {
        const bool branch_taken_0x2161f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2161f0) {
            ctx->pc = 0x2161F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2161F0u;
            // 0x2161f4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216294u;
            goto label_216294;
        }
    }
    ctx->pc = 0x2161F8u;
    // 0x2161f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2161F8u;
    SET_GPR_U32(ctx, 31, 0x216200u);
    ctx->pc = 0x2161FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161F8u;
    // 0x2161fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2161F8u, 0x216200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216200u;
label_216200:
    // 0x216200: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x216200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x216204: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x216204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x216208: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x216208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x21620c: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x21620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x216210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x216210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216214: 0xc085760  jal         func_215D80
    ctx->pc = 0x216214u;
    SET_GPR_U32(ctx, 31, 0x21621Cu);
    ctx->pc = 0x216218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216214u;
    // 0x216218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215D80u, 0x216214u, 0x21621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21621Cu;
label_21621c:
    // 0x21621c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216220: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x216220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x216224: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x216224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x216228: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x216228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x21622c: 0xc0856f4  jal         func_215BD0
    ctx->pc = 0x21622Cu;
    SET_GPR_U32(ctx, 31, 0x216234u);
    ctx->pc = 0x216230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21622Cu;
    // 0x216230: 0x27a8005c  addiu       $t0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x21622Cu, 0x216234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216234u;
label_216234:
    // 0x216234: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x216234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x216238: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x216238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21623c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x216240: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x216240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x216244: 0xc0856f4  jal         func_215BD0
    ctx->pc = 0x216244u;
    SET_GPR_U32(ctx, 31, 0x21624Cu);
    ctx->pc = 0x216248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216244u;
    // 0x216248: 0x27a8006c  addiu       $t0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x216244u, 0x21624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21624Cu;
label_21624c:
    // 0x21624c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216250: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216254: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x216254u;
    {
        const bool branch_taken_0x216254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216254u;
        // 0x216258: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216254) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x21625Cu;
    // 0x21625c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x216260: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216260u;
    {
        const bool branch_taken_0x216260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216260u;
        // 0x216264: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216260) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216268u;
    // 0x216268: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x216268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x21626c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21626Cu;
    {
        const bool branch_taken_0x21626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21626Cu;
        // 0x216270: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21626c) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216274u;
    // 0x216274: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x216274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x216278: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216278u;
    {
        const bool branch_taken_0x216278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216278) {
            ctx->pc = 0x21627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216278u;
            // 0x21627c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216294u;
            goto label_216294;
        }
    }
    ctx->pc = 0x216280u;
label_216280:
    // 0x216280: 0xc08583c  jal         func_2160F0
    ctx->pc = 0x216280u;
    SET_GPR_U32(ctx, 31, 0x216288u);
    ctx->pc = 0x216284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216280u;
    // 0x216284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160F0u, 0x216280u, 0x216288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216288u;
label_216288:
    // 0x216288: 0xc0857b4  jal         func_215ED0
    ctx->pc = 0x216288u;
    SET_GPR_U32(ctx, 31, 0x216290u);
    ctx->pc = 0x21628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216288u;
    // 0x21628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215ED0u, 0x216288u, 0x216290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216290u;
label_216290:
    // 0x216290: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x216290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_216294:
    // 0x216294: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x216294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x216298: 0x3e00008  jr          $ra
    ctx->pc = 0x216298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216298u;
        // 0x21629c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162A0u;
}
