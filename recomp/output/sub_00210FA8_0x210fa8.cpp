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

// Function: sub_00210FA8
// Address: 0x210fa8 - 0x2110a8
void sub_00210FA8_0x210fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210FA8_0x210fa8");
#endif

    switch (ctx->pc) {
        case 0x210fdcu: goto label_210fdc;
        case 0x210ffcu: goto label_210ffc;
        case 0x21100cu: goto label_21100c;
        case 0x211048u: goto label_211048;
        case 0x211068u: goto label_211068;
        case 0x211078u: goto label_211078;
        case 0x211088u: goto label_211088;
        case 0x211090u: goto label_211090;
        default: break;
    }

    ctx->pc = 0x210fa8u;

    // 0x210fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210fac: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x210facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x210fb0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x210fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x210fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210fc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x210fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x210fcc: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x210fd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210fd4: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x210FD4u;
    SET_GPR_U32(ctx, 31, 0x210FDCu);
    ctx->pc = 0x210FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FD4u;
    // 0x210fd8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x210FD4u, 0x210FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FDCu;
label_210fdc:
    // 0x210fdc: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x210FDCu;
    {
        const bool branch_taken_0x210fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210fdc) {
            ctx->pc = 0x210FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210FDCu;
            // 0x210fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211094u;
            goto label_211094;
        }
    }
    ctx->pc = 0x210FE4u;
    // 0x210fe4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x210fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x210fe8: 0x38420181  xori        $v0, $v0, 0x181
    ctx->pc = 0x210fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)385);
    // 0x210fec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x210FECu;
    {
        const bool branch_taken_0x210fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210fec) {
            ctx->pc = 0x210FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210FECu;
            // 0x210ff0: 0xae0001d0  sw          $zero, 0x1D0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211000u;
            goto label_211000;
        }
    }
    ctx->pc = 0x210FF4u;
    // 0x210ff4: 0xc0c6ace  jal         func_31AB38
    ctx->pc = 0x210FF4u;
    SET_GPR_U32(ctx, 31, 0x210FFCu);
    ctx->pc = 0x210FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FF4u;
    // 0x210ff8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB38u, 0x210FF4u, 0x210FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FFCu;
label_210ffc:
    // 0x210ffc: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x210ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
label_211000:
    // 0x211000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211004: 0xc08443c  jal         func_2110F0
    ctx->pc = 0x211004u;
    SET_GPR_U32(ctx, 31, 0x21100Cu);
    ctx->pc = 0x211008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211004u;
    // 0x211008: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110F0u, 0x211004u, 0x21100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21100Cu;
label_21100c:
    // 0x21100c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21100cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211010: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x211010u;
    {
        const bool branch_taken_0x211010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x211010) {
            ctx->pc = 0x211014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211010u;
            // 0x211014: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211020u;
            goto label_211020;
        }
    }
    ctx->pc = 0x211018u;
    // 0x211018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x211018u;
    {
        const bool branch_taken_0x211018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211018u;
        // 0x21101c: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211018) {
            ctx->pc = 0x21104Cu;
            goto label_21104c;
        }
    }
    ctx->pc = 0x211020u;
label_211020:
    // 0x211020: 0x38420181  xori        $v0, $v0, 0x181
    ctx->pc = 0x211020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)385);
    // 0x211024: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x211024u;
    {
        const bool branch_taken_0x211024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211024) {
            ctx->pc = 0x211028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211024u;
            // 0x211028: 0x8e0401a0  lw          $a0, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211050u;
            goto label_211050;
        }
    }
    ctx->pc = 0x21102Cu;
    // 0x21102c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x211030: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x211030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x211034: 0x8c7201a0  lw          $s2, 0x1A0($v1)
    ctx->pc = 0x211034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x211038: 0x6420005  bltzl       $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x211038u;
    {
        const bool branch_taken_0x211038 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x211038) {
            ctx->pc = 0x21103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211038u;
            // 0x21103c: 0x8e0401a0  lw          $a0, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211050u;
            goto label_211050;
        }
    }
    ctx->pc = 0x211040u;
    // 0x211040: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x211040u;
    SET_GPR_U32(ctx, 31, 0x211048u);
    ctx->pc = 0x211044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211040u;
    // 0x211044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x211040u, 0x211048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211048u;
label_211048:
    // 0x211048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21104c:
    // 0x21104c: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_211050:
    // 0x211050: 0x1244000d  beq         $s2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x211050u;
    {
        const bool branch_taken_0x211050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x211050) {
            ctx->pc = 0x211088u;
            goto label_211088;
        }
    }
    ctx->pc = 0x211058u;
    // 0x211058: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211058u;
    {
        const bool branch_taken_0x211058 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x211058) {
            ctx->pc = 0x211078u;
            goto label_211078;
        }
    }
    ctx->pc = 0x211060u;
    // 0x211060: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x211060u;
    SET_GPR_U32(ctx, 31, 0x211068u);
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x211060u, 0x211068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211068u;
label_211068:
    // 0x211068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x211068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21106c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211070: 0xc0844ac  jal         func_2112B0
    ctx->pc = 0x211070u;
    SET_GPR_U32(ctx, 31, 0x211078u);
    ctx->pc = 0x211074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211070u;
    // 0x211074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2112B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2112B0u, 0x211070u, 0x211078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211078u;
label_211078:
    // 0x211078: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211078u;
    {
        const bool branch_taken_0x211078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211078u;
        // 0x21107c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211078) {
            ctx->pc = 0x211088u;
            goto label_211088;
        }
    }
    ctx->pc = 0x211080u;
    // 0x211080: 0xc084492  jal         func_211248
    ctx->pc = 0x211080u;
    SET_GPR_U32(ctx, 31, 0x211088u);
    ctx->pc = 0x211084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211080u;
    // 0x211084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x211080u, 0x211088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211088u;
label_211088:
    // 0x211088: 0xc085876  jal         func_2161D8
    ctx->pc = 0x211088u;
    SET_GPR_U32(ctx, 31, 0x211090u);
    ctx->pc = 0x21108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211088u;
    // 0x21108c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2161D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2161D8u, 0x211088u, 0x211090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211090u;
label_211090:
    // 0x211090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211094:
    // 0x211094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21109c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2110a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2110A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110A0u;
        // 0x2110a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110A8u;
}
