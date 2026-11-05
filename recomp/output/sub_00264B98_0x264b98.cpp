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

// Function: sub_00264B98
// Address: 0x264b98 - 0x264c80
void sub_00264B98_0x264b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264B98_0x264b98");
#endif

    switch (ctx->pc) {
        case 0x264bb4u: goto label_264bb4;
        case 0x264bc8u: goto label_264bc8;
        case 0x264becu: goto label_264bec;
        case 0x264c14u: goto label_264c14;
        case 0x264c24u: goto label_264c24;
        case 0x264c38u: goto label_264c38;
        case 0x264c4cu: goto label_264c4c;
        case 0x264c5cu: goto label_264c5c;
        case 0x264c68u: goto label_264c68;
        default: break;
    }

    ctx->pc = 0x264b98u;

    // 0x264b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264b9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x264ba0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x264ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x264ba4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x264ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264ba8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x264ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x264bac: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x264BACu;
    SET_GPR_U32(ctx, 31, 0x264BB4u);
    ctx->pc = 0x264BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264BACu;
    // 0x264bb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x264BACu, 0x264BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264BB4u;
label_264bb4:
    // 0x264bb4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x264bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x264bb8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x264BB8u;
    {
        const bool branch_taken_0x264bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264bb8) {
            ctx->pc = 0x264BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264BB8u;
            // 0x264bbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C6Cu;
            goto label_264c6c;
        }
    }
    ctx->pc = 0x264BC0u;
    // 0x264bc0: 0xc0bf262  jal         func_2FC988
    ctx->pc = 0x264BC0u;
    SET_GPR_U32(ctx, 31, 0x264BC8u);
    ctx->pc = 0x264BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264BC0u;
    // 0x264bc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC988u, 0x264BC0u, 0x264BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264BC8u;
label_264bc8:
    // 0x264bc8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x264BC8u;
    {
        const bool branch_taken_0x264bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BC8u;
        // 0x264bcc: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bc8) {
            ctx->pc = 0x264C38u;
            goto label_264c38;
        }
    }
    ctx->pc = 0x264BD0u;
    // 0x264bd0: 0xc60002b0  lwc1        $f0, 0x2B0($s0)
    ctx->pc = 0x264bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x264bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264bd8: 0x0  nop
    ctx->pc = 0x264bd8u;
    // NOP
    // 0x264bdc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x264BDCu;
    {
        const bool branch_taken_0x264bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264bdc) {
            ctx->pc = 0x264BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264BDCu;
            // 0x264be0: 0xc60002ac  lwc1        $f0, 0x2AC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x264BF4u;
            goto label_264bf4;
        }
    }
    ctx->pc = 0x264BE4u;
    // 0x264be4: 0xc09731c  jal         func_25CC70
    ctx->pc = 0x264BE4u;
    SET_GPR_U32(ctx, 31, 0x264BECu);
    ctx->pc = 0x264BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264BE4u;
    // 0x264be8: 0x260402b4  addiu       $a0, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC70u, 0x264BE4u, 0x264BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264BECu;
label_264bec:
    // 0x264bec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x264BECu;
    {
        const bool branch_taken_0x264bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BECu;
        // 0x264bf0: 0x8e1102a8  lw          $s1, 0x2A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bec) {
            ctx->pc = 0x264C3Cu;
            goto label_264c3c;
        }
    }
    ctx->pc = 0x264BF4u;
label_264bf4:
    // 0x264bf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x264bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264bf8: 0x0  nop
    ctx->pc = 0x264bf8u;
    // NOP
    // 0x264bfc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x264BFCu;
    {
        const bool branch_taken_0x264bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BFCu;
        // 0x264c00: 0x8e1102a8  lw          $s1, 0x2A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bfc) {
            ctx->pc = 0x264C3Cu;
            goto label_264c3c;
        }
    }
    ctx->pc = 0x264C04u;
    // 0x264c04: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x264C04u;
    {
        const bool branch_taken_0x264c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C04u;
        // 0x264c08: 0x261202b4  addiu       $s2, $s0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c04) {
            ctx->pc = 0x264C68u;
            goto label_264c68;
        }
    }
    ctx->pc = 0x264C0Cu;
    // 0x264c0c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x264C0Cu;
    SET_GPR_U32(ctx, 31, 0x264C14u);
    ctx->pc = 0x264C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C0Cu;
    // 0x264c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x264C0Cu, 0x264C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C14u;
label_264c14:
    // 0x264c14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x264C14u;
    {
        const bool branch_taken_0x264c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c14) {
            ctx->pc = 0x264C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264C14u;
            // 0x264c18: 0x8e0702a4  lw          $a3, 0x2A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C28u;
            goto label_264c28;
        }
    }
    ctx->pc = 0x264C1Cu;
    // 0x264c1c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x264C1Cu;
    SET_GPR_U32(ctx, 31, 0x264C24u);
    ctx->pc = 0x264C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C1Cu;
    // 0x264c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x264C1Cu, 0x264C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C24u;
label_264c24:
    // 0x264c24: 0x8e0702a4  lw          $a3, 0x2A4($s0)
    ctx->pc = 0x264c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_264c28:
    // 0x264c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c2c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x264c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x264c30: 0xc09728c  jal         func_25CA30
    ctx->pc = 0x264C30u;
    SET_GPR_U32(ctx, 31, 0x264C38u);
    ctx->pc = 0x264C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C30u;
    // 0x264c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA30u, 0x264C30u, 0x264C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C38u;
label_264c38:
    // 0x264c38: 0x8e1102a8  lw          $s1, 0x2A8($s0)
    ctx->pc = 0x264c38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
label_264c3c:
    // 0x264c3c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x264C3Cu;
    {
        const bool branch_taken_0x264c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C3Cu;
        // 0x264c40: 0x261002b4  addiu       $s0, $s0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c3c) {
            ctx->pc = 0x264C68u;
            goto label_264c68;
        }
    }
    ctx->pc = 0x264C44u;
    // 0x264c44: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x264C44u;
    SET_GPR_U32(ctx, 31, 0x264C4Cu);
    ctx->pc = 0x264C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C44u;
    // 0x264c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x264C44u, 0x264C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C4Cu;
label_264c4c:
    // 0x264c4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264C4Cu;
    {
        const bool branch_taken_0x264c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C4Cu;
        // 0x264c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c4c) {
            ctx->pc = 0x264C60u;
            goto label_264c60;
        }
    }
    ctx->pc = 0x264C54u;
    // 0x264c54: 0xc0c4900  jal         func_312400
    ctx->pc = 0x264C54u;
    SET_GPR_U32(ctx, 31, 0x264C5Cu);
    ctx->pc = 0x264C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C54u;
    // 0x264c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x264C54u, 0x264C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C5Cu;
label_264c5c:
    // 0x264c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264c60:
    // 0x264c60: 0xc0972f8  jal         func_25CBE0
    ctx->pc = 0x264C60u;
    SET_GPR_U32(ctx, 31, 0x264C68u);
    ctx->pc = 0x264C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264C60u;
    // 0x264c64: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE0u, 0x264C60u, 0x264C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264C68u;
label_264c68:
    // 0x264c68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x264c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_264c6c:
    // 0x264c6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x264c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264c70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264c74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x264c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x264c78: 0x3e00008  jr          $ra
    ctx->pc = 0x264C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C78u;
        // 0x264c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C80u;
}
