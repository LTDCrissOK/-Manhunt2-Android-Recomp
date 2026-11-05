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

// Function: sub_002B70B0
// Address: 0x2b70b0 - 0x2b7430
void sub_002B70B0_0x2b70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B70B0_0x2b70b0");
#endif

    switch (ctx->pc) {
        case 0x2b711cu: goto label_2b711c;
        case 0x2b713cu: goto label_2b713c;
        case 0x2b7144u: goto label_2b7144;
        case 0x2b7198u: goto label_2b7198;
        case 0x2b71f4u: goto label_2b71f4;
        case 0x2b721cu: goto label_2b721c;
        case 0x2b7294u: goto label_2b7294;
        case 0x2b729cu: goto label_2b729c;
        case 0x2b72a8u: goto label_2b72a8;
        case 0x2b72b8u: goto label_2b72b8;
        case 0x2b7314u: goto label_2b7314;
        case 0x2b7330u: goto label_2b7330;
        case 0x2b7348u: goto label_2b7348;
        case 0x2b73b8u: goto label_2b73b8;
        case 0x2b73c0u: goto label_2b73c0;
        case 0x2b73c8u: goto label_2b73c8;
        case 0x2b73e0u: goto label_2b73e0;
        case 0x2b73f0u: goto label_2b73f0;
        case 0x2b73f8u: goto label_2b73f8;
        case 0x2b7410u: goto label_2b7410;
        default: break;
    }

    ctx->pc = 0x2b70b0u;

    // 0x2b70b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b70b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b70b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b70bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2b70bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2b70c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b70c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b70c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b70c8: 0x8e02591c  lw          $v0, 0x591C($s0)
    ctx->pc = 0x2b70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22812)));
    // 0x2b70cc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B70CCu;
    {
        const bool branch_taken_0x2b70cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b70cc) {
            ctx->pc = 0x2B70D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B70CCu;
            // 0x2b70d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B70E4u;
            goto label_2b70e4;
        }
    }
    ctx->pc = 0x2B70D4u;
    // 0x2b70d4: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x2b70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2b70d8: 0xae00591c  sw          $zero, 0x591C($s0)
    ctx->pc = 0x2b70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 0));
    // 0x2b70dc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2B70DCu;
    {
        const bool branch_taken_0x2b70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70DCu;
        // 0x2b70e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70dc) {
            ctx->pc = 0x2B7418u;
            goto label_2b7418;
        }
    }
    ctx->pc = 0x2B70E4u;
label_2b70e4:
    // 0x2b70e4: 0x2444ffcd  addiu       $a0, $v0, -0x33
    ctx->pc = 0x2b70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967245));
    // 0x2b70e8: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2b70e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b70ec: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2B70ECu;
    {
        const bool branch_taken_0x2b70ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70ECu;
        // 0x2b70f0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70ec) {
            ctx->pc = 0x2B7418u;
            goto label_2b7418;
        }
    }
    ctx->pc = 0x2B70F4u;
    // 0x2b70f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b70f8: 0x2442fcc0  addiu       $v0, $v0, -0x340
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966464));
    // 0x2b70fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7100: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7104: 0x800008  jr          $a0
    ctx->pc = 0x2B7104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B710Cu: goto label_2b710c;
            case 0x2B712Cu: goto label_2b712c;
            case 0x2B7214u: goto label_2b7214;
            case 0x2B7340u: goto label_2b7340;
            case 0x2B73D0u: goto label_2b73d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B710Cu;
label_2b710c:
    // 0x2b710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7110: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b7110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7114: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7114u;
    SET_GPR_U32(ctx, 31, 0x2B711Cu);
    ctx->pc = 0x2B7118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7114u;
    // 0x2b7118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7114u, 0x2B711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B711Cu;
label_2b711c:
    // 0x2b711c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x2b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2b7120: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2b7120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2b7124: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2B7124u;
    {
        const bool branch_taken_0x2b7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7124u;
        // 0x2b7128: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7124) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B712Cu;
label_2b712c:
    // 0x2b712c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b712cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7134: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7134u;
    SET_GPR_U32(ctx, 31, 0x2B713Cu);
    ctx->pc = 0x2B7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7134u;
    // 0x2b7138: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7134u, 0x2B713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B713Cu;
label_2b713c:
    // 0x2b713c: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B713Cu;
    SET_GPR_U32(ctx, 31, 0x2B7144u);
    ctx->pc = 0x2B7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B713Cu;
    // 0x2b7140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B713Cu, 0x2B7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7144u;
label_2b7144:
    // 0x2b7144: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b7148: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b714c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b7150: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B7150u;
    {
        const bool branch_taken_0x2b7150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7150u;
        // 0x2b7154: 0x8c632b38  lw          $v1, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7150) {
            ctx->pc = 0x2B7188u;
            goto label_2b7188;
        }
    }
    ctx->pc = 0x2B7158u;
    // 0x2b7158: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b7158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b715c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7160: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b7160u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b7164: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b7164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b7168: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b7168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b716c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7174: 0xae0258f8  sw          $v0, 0x58F8($s0)
    ctx->pc = 0x2b7174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 2));
    // 0x2b7178: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b7178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b717c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7180: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B7180u;
    {
        const bool branch_taken_0x2b7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7180u;
        // 0x2b7184: 0xae11591c  sw          $s1, 0x591C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7180) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B7188u;
label_2b7188:
    // 0x2b7188: 0x1471001e  bne         $v1, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B7188u;
    {
        const bool branch_taken_0x2b7188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b7188) {
            ctx->pc = 0x2B7204u;
            goto label_2b7204;
        }
    }
    ctx->pc = 0x2B7190u;
    // 0x2b7190: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7190u;
    SET_GPR_U32(ctx, 31, 0x2B7198u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7190u, 0x2B7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7198u;
label_2b7198:
    // 0x2b7198: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7198u;
    {
        const bool branch_taken_0x2b7198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7198u;
        // 0x2b719c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7198) {
            ctx->pc = 0x2B71B4u;
            goto label_2b71b4;
        }
    }
    ctx->pc = 0x2B71A0u;
    // 0x2b71a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b71a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b71a4: 0x0  nop
    ctx->pc = 0x2b71a4u;
    // NOP
    // 0x2b71a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b71a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b71ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B71ACu;
    {
        const bool branch_taken_0x2b71ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71ac) {
            ctx->pc = 0x2B71CCu;
            goto label_2b71cc;
        }
    }
    ctx->pc = 0x2B71B4u;
label_2b71b4:
    // 0x2b71b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b71b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b71bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b71bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b71c0: 0x0  nop
    ctx->pc = 0x2b71c0u;
    // NOP
    // 0x2b71c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b71c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b71c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b71c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b71cc:
    // 0x2b71cc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b71ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b71d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b71d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b71d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b71d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b71d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b71d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71dc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2b71dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b71e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b71e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b71e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b71e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b71e8: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b71e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b71ec: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B71ECu;
    SET_GPR_U32(ctx, 31, 0x2B71F4u);
    ctx->pc = 0x2B71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B71ECu;
    // 0x2b71f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B71ECu, 0x2B71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71F4u;
label_2b71f4:
    // 0x2b71f4: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2b71f8: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2b71fc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2B71FCu;
    {
        const bool branch_taken_0x2b71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71FCu;
        // 0x2b7200: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71fc) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B7204u;
label_2b7204:
    // 0x2b7204: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x2B7204u;
    {
        const bool branch_taken_0x2b7204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7204u;
        // 0x2b7208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7204) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B720Cu;
    // 0x2b720c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2B720Cu;
    {
        const bool branch_taken_0x2b720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b720c) {
            ctx->pc = 0x2B73C0u;
            goto label_2b73c0;
        }
    }
    ctx->pc = 0x2B7214u;
label_2b7214:
    // 0x2b7214: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7214u;
    SET_GPR_U32(ctx, 31, 0x2B721Cu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7214u, 0x2B721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B721Cu;
label_2b721c:
    // 0x2b721c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B721Cu;
    {
        const bool branch_taken_0x2b721c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B721Cu;
        // 0x2b7220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b721c) {
            ctx->pc = 0x2B7238u;
            goto label_2b7238;
        }
    }
    ctx->pc = 0x2B7224u;
    // 0x2b7224: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b7224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7228: 0x0  nop
    ctx->pc = 0x2b7228u;
    // NOP
    // 0x2b722c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b722cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7230u;
    {
        const bool branch_taken_0x2b7230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7230) {
            ctx->pc = 0x2B7250u;
            goto label_2b7250;
        }
    }
    ctx->pc = 0x2B7238u;
label_2b7238:
    // 0x2b7238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b723c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7240: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b7240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7244: 0x0  nop
    ctx->pc = 0x2b7244u;
    // NOP
    // 0x2b7248: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b724c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b724cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b7250:
    // 0x2b7250: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7254: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b725c: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7260: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7264: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b7264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b7268: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b7268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b726c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b726cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b7270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b7270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b7274: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b7274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7278: 0x0  nop
    ctx->pc = 0x2b7278u;
    // NOP
    // 0x2b727c: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x2B727Cu;
    {
        const bool branch_taken_0x2b727c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B727Cu;
        // 0x2b7280: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b727c) {
            ctx->pc = 0x2B7418u;
            goto label_2b7418;
        }
    }
    ctx->pc = 0x2B7284u;
    // 0x2b7284: 0x8e065908  lw          $a2, 0x5908($s0)
    ctx->pc = 0x2b7284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22792)));
    // 0x2b7288: 0x24a5fca8  addiu       $a1, $a1, -0x358
    ctx->pc = 0x2b7288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966440));
    // 0x2b728c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2B728Cu;
    SET_GPR_U32(ctx, 31, 0x2B7294u);
    ctx->pc = 0x2B7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B728Cu;
    // 0x2b7290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2B728Cu, 0x2B7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7294u;
label_2b7294:
    // 0x2b7294: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7294u;
    SET_GPR_U32(ctx, 31, 0x2B729Cu);
    ctx->pc = 0x2B7298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7294u;
    // 0x2b7298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7294u, 0x2B729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B729Cu;
label_2b729c:
    // 0x2b729c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72a0: 0xc0ad210  jal         func_2B4840
    ctx->pc = 0x2B72A0u;
    SET_GPR_U32(ctx, 31, 0x2B72A8u);
    ctx->pc = 0x2B72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72A0u;
    // 0x2b72a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4840u, 0x2B72A0u, 0x2B72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72A8u;
label_2b72a8:
    // 0x2b72a8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B72A8u;
    {
        const bool branch_taken_0x2b72a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72A8u;
        // 0x2b72ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72a8) {
            ctx->pc = 0x2B7324u;
            goto label_2b7324;
        }
    }
    ctx->pc = 0x2B72B0u;
    // 0x2b72b0: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B72B0u;
    SET_GPR_U32(ctx, 31, 0x2B72B8u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B72B0u, 0x2B72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72B8u;
label_2b72b8:
    // 0x2b72b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B72B8u;
    {
        const bool branch_taken_0x2b72b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72B8u;
        // 0x2b72bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72b8) {
            ctx->pc = 0x2B72D4u;
            goto label_2b72d4;
        }
    }
    ctx->pc = 0x2B72C0u;
    // 0x2b72c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b72c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b72c4: 0x0  nop
    ctx->pc = 0x2b72c4u;
    // NOP
    // 0x2b72c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b72c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b72cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B72CCu;
    {
        const bool branch_taken_0x2b72cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72cc) {
            ctx->pc = 0x2B72ECu;
            goto label_2b72ec;
        }
    }
    ctx->pc = 0x2B72D4u;
label_2b72d4:
    // 0x2b72d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b72d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b72d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b72dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b72dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b72e0: 0x0  nop
    ctx->pc = 0x2b72e0u;
    // NOP
    // 0x2b72e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b72e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b72e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b72e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b72ec:
    // 0x2b72ec: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b72ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b72f0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b72f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b72f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b72f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b72f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b72f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72fc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2b72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b7300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7304: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7308: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b730c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B730Cu;
    SET_GPR_U32(ctx, 31, 0x2B7314u);
    ctx->pc = 0x2B7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B730Cu;
    // 0x2b7310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B730Cu, 0x2B7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7314u;
label_2b7314:
    // 0x2b7314: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2b7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2b7318: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2b731c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2B731Cu;
    {
        const bool branch_taken_0x2b731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B731Cu;
        // 0x2b7320: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b731c) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B7324u;
label_2b7324:
    // 0x2b7324: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2b7324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2b7328: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7328u;
    SET_GPR_U32(ctx, 31, 0x2B7330u);
    ctx->pc = 0x2B732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7328u;
    // 0x2b732c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7328u, 0x2B7330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7330u;
label_2b7330:
    // 0x2b7330: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2b7330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2b7334: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2b7334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2b7338: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B7338u;
    {
        const bool branch_taken_0x2b7338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7338u;
        // 0x2b733c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7338) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B7340u;
label_2b7340:
    // 0x2b7340: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7340u;
    SET_GPR_U32(ctx, 31, 0x2B7348u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7340u, 0x2B7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7348u;
label_2b7348:
    // 0x2b7348: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7348u;
    {
        const bool branch_taken_0x2b7348 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7348u;
        // 0x2b734c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7348) {
            ctx->pc = 0x2B7364u;
            goto label_2b7364;
        }
    }
    ctx->pc = 0x2B7350u;
    // 0x2b7350: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b7350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7354: 0x0  nop
    ctx->pc = 0x2b7354u;
    // NOP
    // 0x2b7358: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b735c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B735Cu;
    {
        const bool branch_taken_0x2b735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b735c) {
            ctx->pc = 0x2B737Cu;
            goto label_2b737c;
        }
    }
    ctx->pc = 0x2B7364u;
label_2b7364:
    // 0x2b7364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b736c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b736cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7370: 0x0  nop
    ctx->pc = 0x2b7370u;
    // NOP
    // 0x2b7374: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7378: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b7378u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b737c:
    // 0x2b737c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7380: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7388: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b738c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b738cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7390: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b7394: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b7394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b7398: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b7398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b739c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b739cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b73a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b73a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b73a4: 0x0  nop
    ctx->pc = 0x2b73a4u;
    // NOP
    // 0x2b73a8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2B73A8u;
    {
        const bool branch_taken_0x2b73a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73A8u;
        // 0x2b73ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73a8) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B73B0u;
    // 0x2b73b0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B73B0u;
    SET_GPR_U32(ctx, 31, 0x2B73B8u);
    ctx->pc = 0x2B73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73B0u;
    // 0x2b73b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B73B0u, 0x2B73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73B8u;
label_2b73b8:
    // 0x2b73b8: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B73B8u;
    SET_GPR_U32(ctx, 31, 0x2B73C0u);
    ctx->pc = 0x2B73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73B8u;
    // 0x2b73bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B73B8u, 0x2B73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73C0u;
label_2b73c0:
    // 0x2b73c0: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B73C0u;
    SET_GPR_U32(ctx, 31, 0x2B73C8u);
    ctx->pc = 0x2B73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73C0u;
    // 0x2b73c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B73C0u, 0x2B73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73C8u;
label_2b73c8:
    // 0x2b73c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B73C8u;
    {
        const bool branch_taken_0x2b73c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73C8u;
        // 0x2b73cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73c8) {
            ctx->pc = 0x2B7420u;
            goto label_2b7420;
        }
    }
    ctx->pc = 0x2B73D0u;
label_2b73d0:
    // 0x2b73d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b73d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b73d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73d8: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B73D8u;
    SET_GPR_U32(ctx, 31, 0x2B73E0u);
    ctx->pc = 0x2B73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73D8u;
    // 0x2b73dc: 0xae02590c  sw          $v0, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B73D8u, 0x2B73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73E0u;
label_2b73e0:
    // 0x2b73e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B73E0u;
    {
        const bool branch_taken_0x2b73e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73E0u;
        // 0x2b73e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73e0) {
            ctx->pc = 0x2B741Cu;
            goto label_2b741c;
        }
    }
    ctx->pc = 0x2B73E8u;
    // 0x2b73e8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B73E8u;
    SET_GPR_U32(ctx, 31, 0x2B73F0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B73E8u, 0x2B73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73F0u;
label_2b73f0:
    // 0x2b73f0: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B73F0u;
    SET_GPR_U32(ctx, 31, 0x2B73F8u);
    ctx->pc = 0x2B73F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73F0u;
    // 0x2b73f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B73F0u, 0x2B73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73F8u;
label_2b73f8:
    // 0x2b73f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b73fc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b7400: 0xa040a932  sb          $zero, -0x56CE($v0)
    ctx->pc = 0x2b7400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA932u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA932u, _value); } while (0);
    // 0x2b7404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7408: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7408u;
    SET_GPR_U32(ctx, 31, 0x2B7410u);
    ctx->pc = 0x2B740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7408u;
    // 0x2b740c: 0xac60a320  sw          $zero, -0x5CE0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7408u, 0x2B7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7410u;
label_2b7410:
    // 0x2b7410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7410u;
    {
        const bool branch_taken_0x2b7410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7410u;
        // 0x2b7414: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7410) {
            ctx->pc = 0x2B7420u;
            goto label_2b7420;
        }
    }
    ctx->pc = 0x2B7418u;
label_2b7418:
    // 0x2b7418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b741c:
    // 0x2b741c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b741cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7420:
    // 0x2b7420: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2b7420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7428: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7428u;
        // 0x2b742c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7430u;
}
