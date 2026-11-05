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

// Function: sub_0026E0D8
// Address: 0x26e0d8 - 0x26e1c0
void sub_0026E0D8_0x26e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E0D8_0x26e0d8");
#endif

    switch (ctx->pc) {
        case 0x26e108u: goto label_26e108;
        case 0x26e110u: goto label_26e110;
        case 0x26e160u: goto label_26e160;
        case 0x26e168u: goto label_26e168;
        default: break;
    }

    ctx->pc = 0x26e0d8u;

    // 0x26e0d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26e0e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26e0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26e0ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26e0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26e0f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26e0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0f8: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x26e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26e0fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e100: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26E100u;
    {
        const bool branch_taken_0x26e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E100u;
        // 0x26e104: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e100) {
            ctx->pc = 0x26E130u;
            goto label_26e130;
        }
    }
    ctx->pc = 0x26E108u;
label_26e108:
    // 0x26e108: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26E108u;
    SET_GPR_U32(ctx, 31, 0x26E110u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26E108u, 0x26E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E110u;
label_26e110:
    // 0x26e110: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x26e110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26e114: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x26e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x26e118: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x26e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e11c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x26e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x26e120: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E120u;
    {
        const bool branch_taken_0x26e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E120u;
        // 0x26e124: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e120) {
            ctx->pc = 0x26E130u;
            goto label_26e130;
        }
    }
    ctx->pc = 0x26E128u;
    // 0x26e128: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e12c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x26e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_26e130:
    // 0x26e130: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x26e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26e134: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e138: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E138u;
    {
        const bool branch_taken_0x26e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E138u;
        // 0x26e13c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e138) {
            ctx->pc = 0x26E144u;
            goto label_26e144;
        }
    }
    ctx->pc = 0x26E140u;
    // 0x26e140: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e144:
    // 0x26e144: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26E144u;
    {
        const bool branch_taken_0x26e144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e144) {
            ctx->pc = 0x26E108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e108;
        }
    }
    ctx->pc = 0x26E14Cu;
    // 0x26e14c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26e150: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E154u;
    {
        const bool branch_taken_0x26e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E154u;
        // 0x26e158: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e154) {
            ctx->pc = 0x26E188u;
            goto label_26e188;
        }
    }
    ctx->pc = 0x26E15Cu;
    // 0x26e15c: 0x0  nop
    ctx->pc = 0x26e15cu;
    // NOP
label_26e160:
    // 0x26e160: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26E160u;
    SET_GPR_U32(ctx, 31, 0x26E168u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26E160u, 0x26E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E168u;
label_26e168:
    // 0x26e168: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x26e168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26e16c: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x26e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x26e170: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e174: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x26e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x26e178: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E178u;
    {
        const bool branch_taken_0x26e178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E178u;
        // 0x26e17c: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e178) {
            ctx->pc = 0x26E188u;
            goto label_26e188;
        }
    }
    ctx->pc = 0x26E180u;
    // 0x26e180: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e184: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x26e184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_26e188:
    // 0x26e188: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x26e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26e18c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e190: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E190u;
    {
        const bool branch_taken_0x26e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E190u;
        // 0x26e194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e190) {
            ctx->pc = 0x26E19Cu;
            goto label_26e19c;
        }
    }
    ctx->pc = 0x26E198u;
    // 0x26e198: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e19c:
    // 0x26e19c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26E19Cu;
    {
        const bool branch_taken_0x26e19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E19Cu;
        // 0x26e1a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e19c) {
            ctx->pc = 0x26E160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e160;
        }
    }
    ctx->pc = 0x26E1A4u;
    // 0x26e1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26e1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26e1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e1b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26e1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x26E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1B4u;
        // 0x26e1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E1BCu;
    // 0x26e1bc: 0x0  nop
    ctx->pc = 0x26e1bcu;
    // NOP
    ctx->pc = 0x26e1c0u;
}
