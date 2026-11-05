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

// Function: sub_002F58B0
// Address: 0x2f58b0 - 0x2f59c8
void sub_002F58B0_0x2f58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F58B0_0x2f58b0");
#endif

    switch (ctx->pc) {
        case 0x2f5900u: goto label_2f5900;
        case 0x2f5938u: goto label_2f5938;
        case 0x2f5940u: goto label_2f5940;
        case 0x2f59b0u: goto label_2f59b0;
        default: break;
    }

    ctx->pc = 0x2f58b0u;

    // 0x2f58b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f58b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f58b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f58bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f58c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f58c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f58c4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f58c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f58cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f58ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58d0: 0xa040b836  sb          $zero, -0x47CA($v0)
    ctx->pc = 0x2f58d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB836u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB836u, _value); } while (0);
    // 0x2f58d4: 0x2624120c  addiu       $a0, $s1, 0x120C
    ctx->pc = 0x2f58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
    // 0x2f58d8: 0xa060b838  sb          $zero, -0x47C8($v1)
    ctx->pc = 0x2f58d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB838u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB838u, _value); } while (0);
    // 0x2f58dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f58dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58e0: 0xae201244  sw          $zero, 0x1244($s1)
    ctx->pc = 0x2f58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 0));
    // 0x2f58e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f58e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58e8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f58ec: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f58ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f58f0: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    // 0x2f58f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f58f8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f58fc: 0x0  nop
    ctx->pc = 0x2f58fcu;
    // NOP
label_2f5900:
    // 0x2f5900: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2f5900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f5904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5904u;
    {
        const bool branch_taken_0x2f5904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5904u;
        // 0x2f5908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5904) {
            ctx->pc = 0x2F5910u;
            goto label_2f5910;
        }
    }
    ctx->pc = 0x2F590Cu;
    // 0x2f590c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5910:
    // 0x2f5910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5910u;
    {
        const bool branch_taken_0x2f5910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5910) {
            ctx->pc = 0x2F5920u;
            goto label_2f5920;
        }
    }
    ctx->pc = 0x2F5918u;
    // 0x2f5918: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f591c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2f591cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2f5920:
    // 0x2f5920: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F5920u;
    {
        const bool branch_taken_0x2f5920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5920) {
            ctx->pc = 0x2F5924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5920u;
            // 0x2f5924: 0xac601088  sw          $zero, 0x1088($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5900;
        }
    }
    ctx->pc = 0x2F5928u;
    // 0x2f5928: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f592c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F592Cu;
    {
        const bool branch_taken_0x2f592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F592Cu;
        // 0x2f5930: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f592c) {
            ctx->pc = 0x2F5950u;
            goto label_2f5950;
        }
    }
    ctx->pc = 0x2F5934u;
    // 0x2f5934: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2f5934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f5938:
    // 0x2f5938: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x2F5938u;
    SET_GPR_U32(ctx, 31, 0x2F5940u);
    ctx->pc = 0x2F593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5938u;
    // 0x2f593c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2F5938u, 0x2F5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5940u;
label_2f5940:
    // 0x2f5940: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f5940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5944: 0x0  nop
    ctx->pc = 0x2f5944u;
    // NOP
    // 0x2f5948: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F5948u;
    {
        const bool branch_taken_0x2f5948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5948) {
            ctx->pc = 0x2F594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5948u;
            // 0x2f594c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5938;
        }
    }
    ctx->pc = 0x2F5950u;
label_2f5950:
    // 0x2f5950: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2f5950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2f5954: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2f5954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2f5958: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f5958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f595c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f595cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f5960: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f5964: 0xae20121c  sw          $zero, 0x121C($s1)
    ctx->pc = 0x2f5964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 0));
    // 0x2f5968: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f596c: 0xae201220  sw          $zero, 0x1220($s1)
    ctx->pc = 0x2f596cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 0));
    // 0x2f5970: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2f5970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f5974: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2f5974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2f5978: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5978u;
    {
        const bool branch_taken_0x2f5978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5978u;
        // 0x2f597c: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5978) {
            ctx->pc = 0x2F59B0u;
            goto label_2f59b0;
        }
    }
    ctx->pc = 0x2F5980u;
    // 0x2f5980: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2f5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
    // 0x2f5984: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5984u;
    {
        const bool branch_taken_0x2f5984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5984u;
        // 0x2f5988: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5984) {
            ctx->pc = 0x2F599Cu;
            goto label_2f599c;
        }
    }
    ctx->pc = 0x2F598Cu;
    // 0x2f598c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f598cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f5990: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2f5994: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f5998: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2f5998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f599c:
    // 0x2f599c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F599Cu;
    {
        const bool branch_taken_0x2f599c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F599Cu;
        // 0x2f59a0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f599c) {
            ctx->pc = 0x2F59B0u;
            goto label_2f59b0;
        }
    }
    ctx->pc = 0x2F59A4u;
    // 0x2f59a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f59a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59a8: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2F59A8u;
    SET_GPR_U32(ctx, 31, 0x2F59B0u);
    ctx->pc = 0x2F59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59A8u;
    // 0x2f59ac: 0xc44c1b74  lwc1        $f12, 0x1B74($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2F59A8u, 0x2F59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59B0u;
label_2f59b0:
    // 0x2f59b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f59b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f59b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f59b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f59b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f59b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f59bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F59BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59BCu;
        // 0x2f59c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F59BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F59C4u;
    // 0x2f59c4: 0x0  nop
    ctx->pc = 0x2f59c4u;
    // NOP
    ctx->pc = 0x2f59c8u;
}
