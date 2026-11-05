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

// Function: sub_002C7110
// Address: 0x2c7110 - 0x2c7208
void sub_002C7110_0x2c7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7110_0x2c7110");
#endif

    switch (ctx->pc) {
        case 0x2c7160u: goto label_2c7160;
        default: break;
    }

    ctx->pc = 0x2c7110u;

    // 0x2c7110: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c7114: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7118: 0x8c435b78  lw          $v1, 0x5B78($v0)
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x575B78u));
    // 0x2c711c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c7120: 0x24620027  addiu       $v0, $v1, 0x27
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 39));
    // 0x2c7124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7128: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c712c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c7130: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x2c7130u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c7134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7138: 0xb1282b  sltu        $a1, $a1, $s1
    ctx->pc = 0x2c7138u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c713c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C713Cu;
    {
        const bool branch_taken_0x2c713c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C713Cu;
        // 0x2c7140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c713c) {
            ctx->pc = 0x2C71ECu;
            goto label_2c71ec;
        }
    }
    ctx->pc = 0x2C7144u;
    // 0x2c7144: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c7144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c7148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c714c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c714cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7150: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2c7150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c7154: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2c7154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7158: 0xc0b27c4  jal         func_2C9F10
    ctx->pc = 0x2C7158u;
    SET_GPR_U32(ctx, 31, 0x2C7160u);
    ctx->pc = 0x2C715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7158u;
    // 0x2c715c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F10u, 0x2C7158u, 0x2C7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7160u;
label_2c7160:
    // 0x2c7160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c7160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7164: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c716c: 0x10c2001f  beq         $a2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C716Cu;
    {
        const bool branch_taken_0x2c716c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C716Cu;
        // 0x2c7170: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c716c) {
            ctx->pc = 0x2C71ECu;
            goto label_2c71ec;
        }
    }
    ctx->pc = 0x2C7174u;
    // 0x2c7174: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c7174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c7178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7178u;
    {
        const bool branch_taken_0x2c7178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7178u;
        // 0x2c717c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7178) {
            ctx->pc = 0x2C7188u;
            goto label_2c7188;
        }
    }
    ctx->pc = 0x2C7180u;
    // 0x2c7180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7180u;
    {
        const bool branch_taken_0x2c7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7180u;
        // 0x2c7184: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7180) {
            ctx->pc = 0x2C718Cu;
            goto label_2c718c;
        }
    }
    ctx->pc = 0x2C7188u;
label_2c7188:
    // 0x2c7188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c718c:
    // 0x2c718c: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c7190: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x2c7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c7194: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x2c7194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c7198: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2c7198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2c719c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2c719cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2c71a0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x2c71a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c71a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c71a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2c71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c71ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c71acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c71b0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2c71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2c71b4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2c71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2c71b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c71bc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c71bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c71c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C71C0u;
    {
        const bool branch_taken_0x2c71c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c71c0) {
            ctx->pc = 0x2C71C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C71C0u;
            // 0x2c71c4: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C71C8u;
            goto label_2c71c8;
        }
    }
    ctx->pc = 0x2C71C8u;
label_2c71c8:
    // 0x2c71c8: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x2c71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x2c71cc: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2c71d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c71d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c71d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c71d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C71D8u;
    {
        const bool branch_taken_0x2c71d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71D8u;
        // 0x2c71dc: 0xae0301ac  sw          $v1, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71d8) {
            ctx->pc = 0x2C71E4u;
            goto label_2c71e4;
        }
    }
    ctx->pc = 0x2C71E0u;
    // 0x2c71e0: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x2c71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
label_2c71e4:
    // 0x2c71e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C71E4u;
    {
        const bool branch_taken_0x2c71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71E4u;
        // 0x2c71e8: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71e4) {
            ctx->pc = 0x2C71F0u;
            goto label_2c71f0;
        }
    }
    ctx->pc = 0x2C71ECu;
label_2c71ec:
    // 0x2c71ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c71ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c71f0:
    // 0x2c71f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c71f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c71f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c71f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c71f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c71f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c71fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C71FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71FCu;
        // 0x2c7200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C71FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7204u;
    // 0x2c7204: 0x0  nop
    ctx->pc = 0x2c7204u;
    // NOP
    ctx->pc = 0x2c7208u;
}
