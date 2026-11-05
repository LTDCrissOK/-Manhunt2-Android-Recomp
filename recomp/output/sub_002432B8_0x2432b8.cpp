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

// Function: sub_002432B8
// Address: 0x2432b8 - 0x243398
void sub_002432B8_0x2432b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002432B8_0x2432b8");
#endif

    switch (ctx->pc) {
        case 0x2432e8u: goto label_2432e8;
        case 0x243310u: goto label_243310;
        case 0x243338u: goto label_243338;
        case 0x243384u: goto label_243384;
        default: break;
    }

    ctx->pc = 0x2432b8u;

    // 0x2432b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2432bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2432bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2432c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2432c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2432c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2432c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2432c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2432cc: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x2432ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2432d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2432d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2432d4: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x2432d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x2432d8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2432D8u;
    {
        const bool branch_taken_0x2432d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2432DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432D8u;
        // 0x2432dc: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432d8) {
            ctx->pc = 0x243304u;
            goto label_243304;
        }
    }
    ctx->pc = 0x2432E0u;
    // 0x2432e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2432e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432e4: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2432e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2432e8:
    // 0x2432e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2432e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2432ec: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2432ECu;
    {
        const bool branch_taken_0x2432ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2432F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432ECu;
        // 0x2432f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432ec) {
            ctx->pc = 0x243304u;
            goto label_243304;
        }
    }
    ctx->pc = 0x2432F4u;
    // 0x2432f4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2432f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2432f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2432F8u;
    {
        const bool branch_taken_0x2432f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2432FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432F8u;
        // 0x2432fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432f8) {
            ctx->pc = 0x2432E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2432e8;
        }
    }
    ctx->pc = 0x243300u;
    // 0x243300: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x243300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_243304:
    // 0x243304: 0x24a56a58  addiu       $a1, $a1, 0x6A58
    ctx->pc = 0x243304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27224));
    // 0x243308: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x243308u;
    SET_GPR_U32(ctx, 31, 0x243310u);
    ctx->pc = 0x24330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243308u;
    // 0x24330c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x243308u, 0x243310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243310u;
label_243310:
    // 0x243310: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x243310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x243314: 0x240307ce  addiu       $v1, $zero, 0x7CE
    ctx->pc = 0x243314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1998));
    // 0x243318: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x243318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x24331c: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24331Cu;
    {
        const bool branch_taken_0x24331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24331c) {
            ctx->pc = 0x243320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24331Cu;
            // 0x243320: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243388u;
            goto label_243388;
        }
    }
    ctx->pc = 0x243324u;
    // 0x243324: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x243324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x243328: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x243328u;
    {
        const bool branch_taken_0x243328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243328) {
            ctx->pc = 0x24332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243328u;
            // 0x24332c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24335Cu;
            goto label_24335c;
        }
    }
    ctx->pc = 0x243330u;
    // 0x243330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243334: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_243338:
    // 0x243338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24333c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24333Cu;
    {
        const bool branch_taken_0x24333c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24333c) {
            ctx->pc = 0x243340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24333Cu;
            // 0x243340: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24335Cu;
            goto label_24335c;
        }
    }
    ctx->pc = 0x243344u;
    // 0x243344: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x243348: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x243348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24334c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24334Cu;
    {
        const bool branch_taken_0x24334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24334Cu;
        // 0x243350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24334c) {
            ctx->pc = 0x243338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243338;
        }
    }
    ctx->pc = 0x243354u;
    // 0x243354: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x243354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x243358: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x243358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24335c:
    // 0x24335c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24335cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x243360: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x243364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243368: 0x0  nop
    ctx->pc = 0x243368u;
    // NOP
    // 0x24336c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24336cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243370: 0x0  nop
    ctx->pc = 0x243370u;
    // NOP
    // 0x243374: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x243374u;
    {
        const bool branch_taken_0x243374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243374) {
            ctx->pc = 0x243378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243374u;
            // 0x243378: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243388u;
            goto label_243388;
        }
    }
    ctx->pc = 0x24337Cu;
    // 0x24337c: 0xc08e4f6  jal         func_2393D8
    ctx->pc = 0x24337Cu;
    SET_GPR_U32(ctx, 31, 0x243384u);
    ctx->pc = 0x243380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24337Cu;
    // 0x243380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2393D8u, 0x24337Cu, 0x243384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243384u;
label_243384:
    // 0x243384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x243384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243388:
    // 0x243388: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x243388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24338c: 0x3e00008  jr          $ra
    ctx->pc = 0x24338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24338Cu;
        // 0x243390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243394u;
    // 0x243394: 0x0  nop
    ctx->pc = 0x243394u;
    // NOP
    ctx->pc = 0x243398u;
}
