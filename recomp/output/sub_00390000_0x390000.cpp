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

// Function: sub_00390000
// Address: 0x390000 - 0x390130
void sub_00390000_0x390000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390000_0x390000");
#endif

    switch (ctx->pc) {
        case 0x390018u: goto label_390018;
        case 0x390030u: goto label_390030;
        case 0x39009cu: goto label_39009c;
        case 0x3900dcu: goto label_3900dc;
        case 0x3900ecu: goto label_3900ec;
        case 0x390108u: goto label_390108;
        default: break;
    }

    ctx->pc = 0x390000u;

    // 0x390000: 0x8e71a478  lw          $s1, -0x5B88($s3)
    ctx->pc = 0x390000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x390004: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x390004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390008: 0x12220042  beq         $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x390008u;
    {
        const bool branch_taken_0x390008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x39000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390008u;
        // 0x39000c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390008) {
            ctx->pc = 0x390114u;
            goto label_390114;
        }
    }
    ctx->pc = 0x390010u;
    // 0x390010: 0xc0e4e42  jal         func_393908
    ctx->pc = 0x390010u;
    SET_GPR_U32(ctx, 31, 0x390018u);
    ctx->pc = 0x390014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390010u;
    // 0x390014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393908u, 0x390010u, 0x390018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390018u;
label_390018:
    // 0x390018: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x390018u;
    {
        const bool branch_taken_0x390018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390018u;
        // 0x39001c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390018) {
            ctx->pc = 0x390114u;
            goto label_390114;
        }
    }
    ctx->pc = 0x390020u;
    // 0x390020: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390024: 0xdc2598c8  ld          $a1, -0x6738($at)
    ctx->pc = 0x390024u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4798C8u));
    // 0x390028: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390028u;
    SET_GPR_U32(ctx, 31, 0x390030u);
    ctx->pc = 0x39002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390028u;
    // 0x39002c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390028u, 0x390030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390030u;
label_390030:
    // 0x390030: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x390030u;
    {
        const bool branch_taken_0x390030 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x390034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390030u;
        // 0x390034: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390030) {
            ctx->pc = 0x39008Cu;
            goto label_39008c;
        }
    }
    ctx->pc = 0x390038u;
    // 0x390038: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x390038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39003c: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x39003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x390040: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x390044: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390048: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x390048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x39004c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x39004cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x390050: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x390050u;
    {
        const bool branch_taken_0x390050 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x390054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390050u;
        // 0x390054: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390050) {
            ctx->pc = 0x390068u;
            goto label_390068;
        }
    }
    ctx->pc = 0x390058u;
    // 0x390058: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x39005c: 0xdc2298d0  ld          $v0, -0x6730($at)
    ctx->pc = 0x39005cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4798D0u));
    // 0x390060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390060u;
    {
        const bool branch_taken_0x390060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390060u;
        // 0x390064: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390060) {
            ctx->pc = 0x390074u;
            goto label_390074;
        }
    }
    ctx->pc = 0x390068u;
label_390068:
    // 0x390068: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x39006c: 0xdc43a470  ld          $v1, -0x5B90($v0)
    ctx->pc = 0x39006cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47A470u));
    // 0x390070: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x390070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_390074:
    // 0x390074: 0x8e63a478  lw          $v1, -0x5B88($s3)
    ctx->pc = 0x390074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x390078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39007c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x39007Cu;
    {
        const bool branch_taken_0x39007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39007c) {
            ctx->pc = 0x3900E4u;
            goto label_3900e4;
        }
    }
    ctx->pc = 0x390084u;
    // 0x390084: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x390084u;
    {
        const bool branch_taken_0x390084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390084) {
            ctx->pc = 0x3900D4u;
            goto label_3900d4;
        }
    }
    ctx->pc = 0x39008Cu;
label_39008c:
    // 0x39008c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x39008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390090: 0xdc2598d8  ld          $a1, -0x6728($at)
    ctx->pc = 0x390090u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4798D8u));
    // 0x390094: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390094u;
    SET_GPR_U32(ctx, 31, 0x39009Cu);
    ctx->pc = 0x390098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390094u;
    // 0x390098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390094u, 0x39009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39009Cu;
label_39009c:
    // 0x39009c: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x39009Cu;
    {
        const bool branch_taken_0x39009c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3900A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39009Cu;
        // 0x3900a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39009c) {
            ctx->pc = 0x390114u;
            goto label_390114;
        }
    }
    ctx->pc = 0x3900A4u;
    // 0x3900a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3900a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3900a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3900a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3900ac: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x3900acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x3900b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3900b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3900b4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3900b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3900b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3900b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3900bc: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x3900bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x3900c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3900c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3900c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3900c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3900c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3900c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3900cc: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3900CCu;
    {
        const bool branch_taken_0x3900cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3900D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900CCu;
        // 0x3900d0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3900cc) {
            ctx->pc = 0x3900E4u;
            goto label_3900e4;
        }
    }
    ctx->pc = 0x3900D4u;
label_3900d4:
    // 0x3900d4: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x3900D4u;
    SET_GPR_U32(ctx, 31, 0x3900DCu);
    ctx->pc = 0x3900D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3900D4u;
    // 0x3900d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x3900D4u, 0x3900DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900DCu;
label_3900dc:
    // 0x3900dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3900DCu;
    {
        const bool branch_taken_0x3900dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3900E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900DCu;
        // 0x3900e0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3900dc) {
            ctx->pc = 0x3900F8u;
            goto label_3900f8;
        }
    }
    ctx->pc = 0x3900E4u;
label_3900e4:
    // 0x3900e4: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3900E4u;
    SET_GPR_U32(ctx, 31, 0x3900ECu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3900E4u, 0x3900ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900ECu;
label_3900ec:
    // 0x3900ec: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3900ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3900f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3900f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3900f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3900f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3900f8:
    // 0x3900f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3900F8u;
    {
        const bool branch_taken_0x3900f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3900f8) {
            ctx->pc = 0x3900FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3900F8u;
            // 0x3900fc: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390114u;
            goto label_390114;
        }
    }
    ctx->pc = 0x390100u;
    // 0x390100: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390100u;
    SET_GPR_U32(ctx, 31, 0x390108u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390100u, 0x390108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390108u;
label_390108:
    // 0x390108: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x390108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39010c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39010cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390110: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x390110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_390114:
    // 0x390114: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x390114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x390118: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x390118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39011c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x39011cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390120: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x390120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390124: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x390124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390128: 0x3e00008  jr          $ra
    ctx->pc = 0x390128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390128u;
        // 0x39012c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390130u;
}
