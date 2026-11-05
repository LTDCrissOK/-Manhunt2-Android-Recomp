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

// Function: sub_0017DE18
// Address: 0x17de18 - 0x17e288
void sub_0017DE18_0x17de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DE18_0x17de18");
#endif

    switch (ctx->pc) {
        case 0x17de58u: goto label_17de58;
        case 0x17de6cu: goto label_17de6c;
        case 0x17de8cu: goto label_17de8c;
        case 0x17de98u: goto label_17de98;
        case 0x17ded8u: goto label_17ded8;
        case 0x17deecu: goto label_17deec;
        case 0x17df0cu: goto label_17df0c;
        case 0x17df2cu: goto label_17df2c;
        case 0x17df34u: goto label_17df34;
        case 0x17df3cu: goto label_17df3c;
        case 0x17df44u: goto label_17df44;
        case 0x17df50u: goto label_17df50;
        case 0x17df78u: goto label_17df78;
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17dfe4u: goto label_17dfe4;
        case 0x17dffcu: goto label_17dffc;
        case 0x17e030u: goto label_17e030;
        case 0x17e064u: goto label_17e064;
        case 0x17e0e8u: goto label_17e0e8;
        case 0x17e138u: goto label_17e138;
        case 0x17e158u: goto label_17e158;
        case 0x17e174u: goto label_17e174;
        case 0x17e17cu: goto label_17e17c;
        case 0x17e184u: goto label_17e184;
        case 0x17e18cu: goto label_17e18c;
        case 0x17e1b8u: goto label_17e1b8;
        case 0x17e1e0u: goto label_17e1e0;
        case 0x17e220u: goto label_17e220;
        case 0x17e258u: goto label_17e258;
        default: break;
    }

    ctx->pc = 0x17de18u;

    // 0x17de18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17de18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17de1c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17de20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x17de20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17de24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17de24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de28: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17de2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de30: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x17de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17de34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de38: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17de3c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x17de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17de40: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x17de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17de44: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x17de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x17de48: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x17de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x17de4c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x17de4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x17de50: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DE50u;
    SET_GPR_U32(ctx, 31, 0x17DE58u);
    ctx->pc = 0x17DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE50u;
    // 0x17de54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DE50u, 0x17DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE58u;
label_17de58:
    // 0x17de58: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17de5c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DE5Cu;
    {
        const bool branch_taken_0x17de5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de5c) {
            ctx->pc = 0x17DE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DE5Cu;
            // 0x17de60: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DE74u;
            goto label_17de74;
        }
    }
    ctx->pc = 0x17DE64u;
    // 0x17de64: 0xc05f5dc  jal         func_17D770
    ctx->pc = 0x17DE64u;
    SET_GPR_U32(ctx, 31, 0x17DE6Cu);
    ctx->pc = 0x17DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE64u;
    // 0x17de68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D770u, 0x17DE64u, 0x17DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE6Cu;
label_17de6c:
    // 0x17de6c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x17DE6Cu;
    {
        const bool branch_taken_0x17de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE6Cu;
        // 0x17de70: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de6c) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DE74u;
label_17de74:
    // 0x17de74: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17DE74u;
    {
        const bool branch_taken_0x17de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de74) {
            ctx->pc = 0x17DE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DE74u;
            // 0x17de78: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DEA4u;
            goto label_17dea4;
        }
    }
    ctx->pc = 0x17DE7Cu;
    // 0x17de7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17de80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17de80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17de84: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DE84u;
    SET_GPR_U32(ctx, 31, 0x17DE8Cu);
    ctx->pc = 0x17DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE84u;
    // 0x17de88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DE84u, 0x17DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE8Cu;
label_17de8c:
    // 0x17de8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17de8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de90: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17DE90u;
    SET_GPR_U32(ctx, 31, 0x17DE98u);
    ctx->pc = 0x17DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE90u;
    // 0x17de94: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17DE90u, 0x17DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE98u;
label_17de98:
    // 0x17de98: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x17de98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x17de9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17DE9Cu;
    {
        const bool branch_taken_0x17de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE9Cu;
        // 0x17dea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de9c) {
            ctx->pc = 0x17DF48u;
            goto label_17df48;
        }
    }
    ctx->pc = 0x17DEA4u;
label_17dea4:
    // 0x17dea4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x17DEA4u;
    {
        const bool branch_taken_0x17dea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dea4) {
            ctx->pc = 0x17DEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DEA4u;
            // 0x17dea8: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DF58u;
            goto label_17df58;
        }
    }
    ctx->pc = 0x17DEACu;
    // 0x17deac: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x17deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x17deb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DEB0u;
    {
        const bool branch_taken_0x17deb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEB0u;
        // 0x17deb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deb0) {
            ctx->pc = 0x17DEC4u;
            goto label_17dec4;
        }
    }
    ctx->pc = 0x17DEB8u;
    // 0x17deb8: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x17debc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17dec0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x17dec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17dec4:
    // 0x17dec4: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x17DEC4u;
    {
        const bool branch_taken_0x17dec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEC4u;
        // 0x17dec8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dec4) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DECCu;
    // 0x17decc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ded0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DED0u;
    SET_GPR_U32(ctx, 31, 0x17DED8u);
    ctx->pc = 0x17DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED0u;
    // 0x17ded4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DED0u, 0x17DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DED8u;
label_17ded8:
    // 0x17ded8: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17dedc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17DEDCu;
    {
        const bool branch_taken_0x17dedc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEDCu;
        // 0x17dee0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dedc) {
            ctx->pc = 0x17DF48u;
            goto label_17df48;
        }
    }
    ctx->pc = 0x17DEE4u;
    // 0x17dee4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DEE4u;
    SET_GPR_U32(ctx, 31, 0x17DEECu);
    ctx->pc = 0x17DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DEE4u;
    // 0x17dee8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DEE4u, 0x17DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEECu;
label_17deec:
    // 0x17deec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17DEECu;
    {
        const bool branch_taken_0x17deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEECu;
        // 0x17def0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deec) {
            ctx->pc = 0x17DF44u;
            goto label_17df44;
        }
    }
    ctx->pc = 0x17DEF4u;
    // 0x17def4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17def8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x17defc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17defcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17df00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17df04: 0xc04394a  jal         func_10E528
    ctx->pc = 0x17DF04u;
    SET_GPR_U32(ctx, 31, 0x17DF0Cu);
    ctx->pc = 0x17DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF04u;
    // 0x17df08: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E528u, 0x17DF04u, 0x17DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF0Cu;
label_17df0c:
    // 0x17df0c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17DF0Cu;
    {
        const bool branch_taken_0x17df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df0c) {
            ctx->pc = 0x17DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DF0Cu;
            // 0x17df10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DF48u;
            goto label_17df48;
        }
    }
    ctx->pc = 0x17DF14u;
    // 0x17df14: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17DF14u;
    {
        const bool branch_taken_0x17df14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17df14) {
            ctx->pc = 0x17DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DF14u;
            // 0x17df18: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DF48u;
            goto label_17df48;
        }
    }
    ctx->pc = 0x17DF1Cu;
    // 0x17df1c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x17df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x17df20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17df20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df24: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17DF24u;
    SET_GPR_U32(ctx, 31, 0x17DF2Cu);
    ctx->pc = 0x17DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF24u;
    // 0x17df28: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D748u, 0x17DF24u, 0x17DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF2Cu;
label_17df2c:
    // 0x17df2c: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17DF2Cu;
    SET_GPR_U32(ctx, 31, 0x17DF34u);
    ctx->pc = 0x17DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF2Cu;
    // 0x17df30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17DF2Cu, 0x17DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF34u;
label_17df34:
    // 0x17df34: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17DF34u;
    SET_GPR_U32(ctx, 31, 0x17DF3Cu);
    ctx->pc = 0x17DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF34u;
    // 0x17df38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17DF34u, 0x17DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF3Cu;
label_17df3c:
    // 0x17df3c: 0xc05f60e  jal         func_17D838
    ctx->pc = 0x17DF3Cu;
    SET_GPR_U32(ctx, 31, 0x17DF44u);
    ctx->pc = 0x17DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF3Cu;
    // 0x17df40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D838u, 0x17DF3Cu, 0x17DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF44u;
label_17df44:
    // 0x17df44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17df44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17df48:
    // 0x17df48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DF48u;
    SET_GPR_U32(ctx, 31, 0x17DF50u);
    ctx->pc = 0x17DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF48u;
    // 0x17df4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DF48u, 0x17DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF50u;
label_17df50:
    // 0x17df50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17DF50u;
    {
        const bool branch_taken_0x17df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df50) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DF58u;
label_17df58:
    // 0x17df58: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17DF58u;
    {
        const bool branch_taken_0x17df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF58u;
        // 0x17df5c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df58) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DF60u;
    // 0x17df60: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x17df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17df64: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x17df68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17df6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17df70: 0xc043958  jal         func_10E560
    ctx->pc = 0x17DF70u;
    SET_GPR_U32(ctx, 31, 0x17DF78u);
    ctx->pc = 0x17DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF70u;
    // 0x17df74: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x17DF70u, 0x17DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF78u;
label_17df78:
    // 0x17df78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DF78u;
    {
        const bool branch_taken_0x17df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF78u;
        // 0x17df7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df78) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DF80u;
    // 0x17df80: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x17df80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_17df84:
    // 0x17df84: 0x12200087  beqz        $s1, . + 4 + (0x87 << 2)
    ctx->pc = 0x17DF84u;
    {
        const bool branch_taken_0x17df84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF84u;
        // 0x17df88: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df84) {
            ctx->pc = 0x17E1A4u;
            goto label_17e1a4;
        }
    }
    ctx->pc = 0x17DF8Cu;
    // 0x17df8c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x17df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17df90: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x17df94: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17df94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17df98: 0x2450020c  addiu       $s0, $v0, 0x20C
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 524));
    // 0x17df9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17dfa0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17dfa4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17dfa8: 0xc04394a  jal         func_10E528
    ctx->pc = 0x17DFA8u;
    SET_GPR_U32(ctx, 31, 0x17DFB0u);
    ctx->pc = 0x17DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFA8u;
    // 0x17dfac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E528u, 0x17DFA8u, 0x17DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFB0u;
label_17dfb0:
    // 0x17dfb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17dfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb4: 0x52200079  beql        $s1, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x17DFB4u;
    {
        const bool branch_taken_0x17dfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfb4) {
            ctx->pc = 0x17DFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DFB4u;
            // 0x17dfb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E19Cu;
            goto label_17e19c;
        }
    }
    ctx->pc = 0x17DFBCu;
    // 0x17dfbc: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x17dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x17dfc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17dfc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dfc8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dfcc: 0x15982b  sltu        $s3, $zero, $s5
    ctx->pc = 0x17dfccu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x17dfd0: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
    ctx->pc = 0x17DFD0u;
    {
        const bool branch_taken_0x17dfd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFD0u;
        // 0x17dfd4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfd0) {
            ctx->pc = 0x17E160u;
            goto label_17e160;
        }
    }
    ctx->pc = 0x17DFD8u;
    // 0x17dfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfdc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DFDCu;
    SET_GPR_U32(ctx, 31, 0x17DFE4u);
    ctx->pc = 0x17DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFDCu;
    // 0x17dfe0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DFDCu, 0x17DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFE4u;
label_17dfe4:
    // 0x17dfe4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x17dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x17dfe8: 0x8c6507c4  lw          $a1, 0x7C4($v1)
    ctx->pc = 0x17dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F07C4u));
    // 0x17dfec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DFECu;
    {
        const bool branch_taken_0x17dfec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFECu;
        // 0x17dff0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfec) {
            ctx->pc = 0x17E004u;
            goto label_17e004;
        }
    }
    ctx->pc = 0x17DFF4u;
    // 0x17dff4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DFF4u;
    SET_GPR_U32(ctx, 31, 0x17DFFCu);
    ctx->pc = 0x17DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFF4u;
    // 0x17dff8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DFF4u, 0x17DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFFCu;
label_17dffc:
    // 0x17dffc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x17DFFCu;
    {
        const bool branch_taken_0x17dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dffc) {
            ctx->pc = 0x17E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DFFCu;
            // 0x17e000: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E084u;
            goto label_17e084;
        }
    }
    ctx->pc = 0x17E004u;
label_17e004:
    // 0x17e004: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x17e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x17e008: 0x906207c0  lbu         $v0, 0x7C0($v1)
    ctx->pc = 0x17e008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F07C0u));
    // 0x17e00c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x17e00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17e010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E010u;
    {
        const bool branch_taken_0x17e010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E010u;
        // 0x17e014: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e010) {
            ctx->pc = 0x17E028u;
            goto label_17e028;
        }
    }
    ctx->pc = 0x17E018u;
    // 0x17e018: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x17e01c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x17e01cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e020: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E020u;
    {
        const bool branch_taken_0x17e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E020u;
        // 0x17e024: 0xac4007bc  sw          $zero, 0x7BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e020) {
            ctx->pc = 0x17E058u;
            goto label_17e058;
        }
    }
    ctx->pc = 0x17E028u;
label_17e028:
    // 0x17e028: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x17E028u;
    SET_GPR_U32(ctx, 31, 0x17E030u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x17E028u, 0x17E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E030u;
label_17e030:
    // 0x17e030: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17e034: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x17e034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x17e038: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x17e038u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x17e03c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E03Cu;
    {
        const bool branch_taken_0x17e03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e03c) {
            ctx->pc = 0x17E040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E03Cu;
            // 0x17e040: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E044u;
            goto label_17e044;
        }
    }
    ctx->pc = 0x17E044u;
label_17e044:
    // 0x17e044: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17e044u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e048: 0x1810  mfhi        $v1
    ctx->pc = 0x17e048u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x17e04c: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x17e04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x17e050: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x17e054: 0xaca307bc  sw          $v1, 0x7BC($a1)
    ctx->pc = 0x17e054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1980), GPR_U32(ctx, 3));
label_17e058:
    // 0x17e058: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e05c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17E05Cu;
    SET_GPR_U32(ctx, 31, 0x17E064u);
    ctx->pc = 0x17E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E05Cu;
    // 0x17e060: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17E05Cu, 0x17E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E064u;
label_17e064:
    // 0x17e064: 0x920307c0  lbu         $v1, 0x7C0($s0)
    ctx->pc = 0x17e064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x17e068: 0x8ec407bc  lw          $a0, 0x7BC($s6)
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1980)));
    // 0x17e06c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17e070: 0xafc207c4  sw          $v0, 0x7C4($fp)
    ctx->pc = 0x17e070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1988), GPR_U32(ctx, 2));
    // 0x17e074: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E074u;
    {
        const bool branch_taken_0x17e074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E074u;
        // 0x17e078: 0xa20307c0  sb          $v1, 0x7C0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e074) {
            ctx->pc = 0x17E080u;
            goto label_17e080;
        }
    }
    ctx->pc = 0x17E07Cu;
    // 0x17e07c: 0xa20007c0  sb          $zero, 0x7C0($s0)
    ctx->pc = 0x17e07cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1984), (uint8_t)GPR_U32(ctx, 0));
label_17e080:
    // 0x17e080: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_17e084:
    // 0x17e084: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17e084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17e088: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x17e08c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e094: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x17e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17e098: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E098u;
    {
        const bool branch_taken_0x17e098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e098) {
            ctx->pc = 0x17E09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E098u;
            // 0x17e09c: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E0A8u;
            goto label_17e0a8;
        }
    }
    ctx->pc = 0x17E0A0u;
    // 0x17e0a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E0A0u;
    {
        const bool branch_taken_0x17e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0A0u;
        // 0x17e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0a0) {
            ctx->pc = 0x17E0B0u;
            goto label_17e0b0;
        }
    }
    ctx->pc = 0x17E0A8u;
label_17e0a8:
    // 0x17e0a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e0ac: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17e0b0:
    // 0x17e0b0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x17e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17e0b4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17e0b8: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x17e0bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e0c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e0c4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x17e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17e0c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E0C8u;
    {
        const bool branch_taken_0x17e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e0c8) {
            ctx->pc = 0x17E0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E0C8u;
            // 0x17e0cc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E0D8u;
            goto label_17e0d8;
        }
    }
    ctx->pc = 0x17E0D0u;
    // 0x17e0d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E0D0u;
    {
        const bool branch_taken_0x17e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0D8u;
label_17e0d8:
    // 0x17e0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e0dc: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x17e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17e0e0:
    // 0x17e0e0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17E0E0u;
    SET_GPR_U32(ctx, 31, 0x17E0E8u);
    ctx->pc = 0x17E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0E0u;
    // 0x17e0e4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17E0E0u, 0x17E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0E8u;
label_17e0e8:
    // 0x17e0e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e0ec: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x17e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e0f0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x17e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e0f4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x17e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e0f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e0f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e0fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e0fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17e100: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17e100u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17e104: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x17e104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x17e108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e10c: 0x0  nop
    ctx->pc = 0x17e10cu;
    // NOP
    // 0x17e110: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17e110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e114: 0x0  nop
    ctx->pc = 0x17e114u;
    // NOP
    // 0x17e118: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E12Cu;
            goto label_17e12c;
        }
    }
    ctx->pc = 0x17E120u;
    // 0x17e120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e124: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x17e124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x17e128: 0x8c5307bc  lw          $s3, 0x7BC($v0)
    ctx->pc = 0x17e128u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_17e12c:
    // 0x17e12c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e130: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17E130u;
    SET_GPR_U32(ctx, 31, 0x17E138u);
    ctx->pc = 0x17E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E130u;
    // 0x17e134: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17E130u, 0x17E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E138u;
label_17e138:
    // 0x17e138: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E138u;
    {
        const bool branch_taken_0x17e138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E138u;
        // 0x17e13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e138) {
            ctx->pc = 0x17E160u;
            goto label_17e160;
        }
    }
    ctx->pc = 0x17E140u;
    // 0x17e140: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x17e140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x17e144: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x17e144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x17e148: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x17e148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e14c: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x17e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e150: 0xc05fac8  jal         func_17EB20
    ctx->pc = 0x17E150u;
    SET_GPR_U32(ctx, 31, 0x17E158u);
    ctx->pc = 0x17E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E150u;
    // 0x17e154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EB20u, 0x17E150u, 0x17E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E158u;
label_17e158:
    // 0x17e158: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17E158u;
    {
        const bool branch_taken_0x17e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E158u;
        // 0x17e15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e158) {
            ctx->pc = 0x17E1A0u;
            goto label_17e1a0;
        }
    }
    ctx->pc = 0x17E160u;
label_17e160:
    // 0x17e160: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E160u;
    {
        const bool branch_taken_0x17e160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E160u;
        // 0x17e164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e160) {
            ctx->pc = 0x17E19Cu;
            goto label_17e19c;
        }
    }
    ctx->pc = 0x17E168u;
    // 0x17e168: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x17e168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x17e16c: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17E16Cu;
    SET_GPR_U32(ctx, 31, 0x17E174u);
    ctx->pc = 0x17E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E16Cu;
    // 0x17e170: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D748u, 0x17E16Cu, 0x17E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E174u;
label_17e174:
    // 0x17e174: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17E174u;
    SET_GPR_U32(ctx, 31, 0x17E17Cu);
    ctx->pc = 0x17E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E174u;
    // 0x17e178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17E174u, 0x17E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E17Cu;
label_17e17c:
    // 0x17e17c: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17E17Cu;
    SET_GPR_U32(ctx, 31, 0x17E184u);
    ctx->pc = 0x17E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E17Cu;
    // 0x17e180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17E17Cu, 0x17E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E184u;
label_17e184:
    // 0x17e184: 0xc05f60e  jal         func_17D838
    ctx->pc = 0x17E184u;
    SET_GPR_U32(ctx, 31, 0x17E18Cu);
    ctx->pc = 0x17E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E184u;
    // 0x17e188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D838u, 0x17E184u, 0x17E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E18Cu;
label_17e18c:
    // 0x17e18c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e190: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E190u;
    {
        const bool branch_taken_0x17e190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E190u;
        // 0x17e194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e190) {
            ctx->pc = 0x17E19Cu;
            goto label_17e19c;
        }
    }
    ctx->pc = 0x17E198u;
    // 0x17e198: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x17e198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_17e19c:
    // 0x17e19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e1a0:
    // 0x17e1a0: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x17e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_17e1a4:
    // 0x17e1a4: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x17e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x17e1a8: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17E1A8u;
    {
        const bool branch_taken_0x17e1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e1a8) {
            ctx->pc = 0x17E218u;
            goto label_17e218;
        }
    }
    ctx->pc = 0x17E1B0u;
    // 0x17e1b0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17E1B0u;
    SET_GPR_U32(ctx, 31, 0x17E1B8u);
    ctx->pc = 0x17E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B0u;
    // 0x17e1b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17E1B0u, 0x17E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1B8u;
label_17e1b8:
    // 0x17e1b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17E1B8u;
    {
        const bool branch_taken_0x17e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1B8u;
        // 0x17e1bc: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1b8) {
            ctx->pc = 0x17E218u;
            goto label_17e218;
        }
    }
    ctx->pc = 0x17E1C0u;
    // 0x17e1c0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17e1c4: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x17e1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x17e1c8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x17e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x17e1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e1d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17e1d4: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x17e1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17e1d8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x17E1D8u;
    SET_GPR_U32(ctx, 31, 0x17E1E0u);
    ctx->pc = 0x17E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1D8u;
    // 0x17e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x17E1D8u, 0x17E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1E0u;
label_17e1e0:
    // 0x17e1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17e1e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e1ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17e1f0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x17e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x17e1f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E1F4u;
    {
        const bool branch_taken_0x17e1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e1f4) {
            ctx->pc = 0x17E1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E1F4u;
            // 0x17e1f8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E204u;
            goto label_17e204;
        }
    }
    ctx->pc = 0x17E1FCu;
    // 0x17e1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E1FCu;
    {
        const bool branch_taken_0x17e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1FCu;
        // 0x17e200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1fc) {
            ctx->pc = 0x17E20Cu;
            goto label_17e20c;
        }
    }
    ctx->pc = 0x17E204u;
label_17e204:
    // 0x17e204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e208: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17e20c:
    // 0x17e20c: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x17e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x17e210: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17e210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e214: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x17e214u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_17e218:
    // 0x17e218: 0xc05fb64  jal         func_17ED90
    ctx->pc = 0x17E218u;
    SET_GPR_U32(ctx, 31, 0x17E220u);
    ctx->pc = 0x17E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E218u;
    // 0x17e21c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED90u, 0x17E218u, 0x17E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E220u;
label_17e220:
    // 0x17e220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E220u;
    {
        const bool branch_taken_0x17e220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E220u;
        // 0x17e224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e220) {
            ctx->pc = 0x17E22Cu;
            goto label_17e22c;
        }
    }
    ctx->pc = 0x17E228u;
    // 0x17e228: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x17e228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_17e22c:
    // 0x17e22c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17e230: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x17e234: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x17e234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x17e238: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x17e238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x17e23c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E23Cu;
    {
        const bool branch_taken_0x17e23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E23Cu;
        // 0x17e240: 0xae43005c  sw          $v1, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e23c) {
            ctx->pc = 0x17E248u;
            goto label_17e248;
        }
    }
    ctx->pc = 0x17E244u;
    // 0x17e244: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x17e244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_17e248:
    // 0x17e248: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x17e248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x17e24c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e250: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17E250u;
    SET_GPR_U32(ctx, 31, 0x17E258u);
    ctx->pc = 0x17E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E250u;
    // 0x17e254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17E250u, 0x17E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E258u;
label_17e258:
    // 0x17e258: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17e258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e25c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x17e25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e260: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x17e260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e264: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17e264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17e268: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17e268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e26c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x17e26cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e270: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x17e270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e274: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17e278: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e27c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x17e27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17e280: 0x3e00008  jr          $ra
    ctx->pc = 0x17E280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E280u;
        // 0x17e284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E288u;
}
