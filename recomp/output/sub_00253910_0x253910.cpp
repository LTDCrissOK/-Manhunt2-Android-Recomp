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

// Function: sub_00253910
// Address: 0x253910 - 0x253a28
void sub_00253910_0x253910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253910_0x253910");
#endif

    switch (ctx->pc) {
        case 0x253968u: goto label_253968;
        case 0x253974u: goto label_253974;
        case 0x253980u: goto label_253980;
        case 0x2539acu: goto label_2539ac;
        case 0x2539ecu: goto label_2539ec;
        case 0x253a04u: goto label_253a04;
        case 0x253a0cu: goto label_253a0c;
        default: break;
    }

    ctx->pc = 0x253910u;

    // 0x253910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253914: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x253914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x253918: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x253918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25391c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25391cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253920: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x253920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253924: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x253924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253928: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x253928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25392c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x25392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253930: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253934u;
    {
        const bool branch_taken_0x253934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253934u;
        // 0x253938: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253934) {
            ctx->pc = 0x253944u;
            goto label_253944;
        }
    }
    ctx->pc = 0x25393Cu;
    // 0x25393c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25393Cu;
    {
        const bool branch_taken_0x25393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25393Cu;
        // 0x253940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25393c) {
            ctx->pc = 0x253A10u;
            goto label_253a10;
        }
    }
    ctx->pc = 0x253944u;
label_253944:
    // 0x253944: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x253944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x253948: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x253948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x25394c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x25394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x253950: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x253950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x253954: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253954u;
    {
        const bool branch_taken_0x253954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253954u;
        // 0x253958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253954) {
            ctx->pc = 0x253980u;
            goto label_253980;
        }
    }
    ctx->pc = 0x25395Cu;
    // 0x25395c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253960: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x253960u;
    SET_GPR_U32(ctx, 31, 0x253968u);
    ctx->pc = 0x253964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253960u;
    // 0x253964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x253960u, 0x253968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253968u;
label_253968:
    // 0x253968: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x253968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x25396c: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x25396Cu;
    SET_GPR_U32(ctx, 31, 0x253974u);
    ctx->pc = 0x253970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25396Cu;
    // 0x253970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x25396Cu, 0x253974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253974u;
label_253974:
    // 0x253974: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x253974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x253978: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x253978u;
    SET_GPR_U32(ctx, 31, 0x253980u);
    ctx->pc = 0x25397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253978u;
    // 0x25397c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x253978u, 0x253980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253980u;
label_253980:
    // 0x253980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253984: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253988: 0xae021060  sw          $v0, 0x1060($s0)
    ctx->pc = 0x253988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    // 0x25398c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x25398Cu;
    {
        const bool branch_taken_0x25398c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x253990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25398Cu;
        // 0x253990: 0xac62035c  sw          $v0, 0x35C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25398c) {
            ctx->pc = 0x2539F4u;
            goto label_2539f4;
        }
    }
    ctx->pc = 0x253994u;
    // 0x253994: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x253994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x253998: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x253998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x25399c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2539a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2539a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a4: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x2539A4u;
    SET_GPR_U32(ctx, 31, 0x2539ACu);
    ctx->pc = 0x2539A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539A4u;
    // 0x2539a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x2539A4u, 0x2539ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539ACu;
label_2539ac:
    // 0x2539ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2539ACu;
    {
        const bool branch_taken_0x2539ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2539B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539ACu;
        // 0x2539b0: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539ac) {
            ctx->pc = 0x2539F8u;
            goto label_2539f8;
        }
    }
    ctx->pc = 0x2539B4u;
    // 0x2539b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2539b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2539b8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2539b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539bc: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x2539bcu;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2539c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2539c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539c4: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2539c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2539c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2539c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2539ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2539d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2539d4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2539d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2539d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2539d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2539dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2539dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2539e0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2539e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2539e4: 0xc061e38  jal         func_1878E0
    ctx->pc = 0x2539E4u;
    SET_GPR_U32(ctx, 31, 0x2539ECu);
    ctx->pc = 0x2539E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539E4u;
    // 0x2539e8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1878E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878E0u, 0x2539E4u, 0x2539ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539ECu;
label_2539ec:
    // 0x2539ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2539ECu;
    {
        const bool branch_taken_0x2539ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2539ec) {
            ctx->pc = 0x253A04u;
            goto label_253a04;
        }
    }
    ctx->pc = 0x2539F4u;
label_2539f4:
    // 0x2539f4: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x2539f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_2539f8:
    // 0x2539f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2539f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539fc: 0xc061e38  jal         func_1878E0
    ctx->pc = 0x2539FCu;
    SET_GPR_U32(ctx, 31, 0x253A04u);
    ctx->pc = 0x253A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539FCu;
    // 0x253a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1878E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878E0u, 0x2539FCu, 0x253A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A04u;
label_253a04:
    // 0x253a04: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253A04u;
    SET_GPR_U32(ctx, 31, 0x253A0Cu);
    ctx->pc = 0x253A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A04u;
    // 0x253a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253A04u, 0x253A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A0Cu;
label_253a0c:
    // 0x253a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253a10:
    // 0x253a10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x253a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253a14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x253a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253a18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x253a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253a1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x253a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253a20: 0x3e00008  jr          $ra
    ctx->pc = 0x253A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A20u;
        // 0x253a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253A28u;
}
