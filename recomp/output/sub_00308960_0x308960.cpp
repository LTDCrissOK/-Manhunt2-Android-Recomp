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

// Function: sub_00308960
// Address: 0x308960 - 0x308a18
void sub_00308960_0x308960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308960_0x308960");
#endif

    switch (ctx->pc) {
        case 0x308960u: goto label_308960;
        case 0x308964u: goto label_308964;
        case 0x308968u: goto label_308968;
        case 0x30896cu: goto label_30896c;
        case 0x308970u: goto label_308970;
        case 0x308974u: goto label_308974;
        case 0x308978u: goto label_308978;
        case 0x30897cu: goto label_30897c;
        case 0x308980u: goto label_308980;
        case 0x308984u: goto label_308984;
        case 0x308988u: goto label_308988;
        case 0x30898cu: goto label_30898c;
        case 0x308990u: goto label_308990;
        case 0x308994u: goto label_308994;
        case 0x308998u: goto label_308998;
        case 0x30899cu: goto label_30899c;
        case 0x3089a0u: goto label_3089a0;
        case 0x3089a4u: goto label_3089a4;
        case 0x3089a8u: goto label_3089a8;
        case 0x3089acu: goto label_3089ac;
        case 0x3089b0u: goto label_3089b0;
        case 0x3089b4u: goto label_3089b4;
        case 0x3089b8u: goto label_3089b8;
        case 0x3089bcu: goto label_3089bc;
        case 0x3089c0u: goto label_3089c0;
        case 0x3089c4u: goto label_3089c4;
        case 0x3089c8u: goto label_3089c8;
        case 0x3089ccu: goto label_3089cc;
        case 0x3089d0u: goto label_3089d0;
        case 0x3089d4u: goto label_3089d4;
        case 0x3089d8u: goto label_3089d8;
        case 0x3089dcu: goto label_3089dc;
        case 0x3089e0u: goto label_3089e0;
        case 0x3089e4u: goto label_3089e4;
        case 0x3089e8u: goto label_3089e8;
        case 0x3089ecu: goto label_3089ec;
        case 0x3089f0u: goto label_3089f0;
        case 0x3089f4u: goto label_3089f4;
        case 0x3089f8u: goto label_3089f8;
        case 0x3089fcu: goto label_3089fc;
        case 0x308a00u: goto label_308a00;
        case 0x308a04u: goto label_308a04;
        case 0x308a08u: goto label_308a08;
        case 0x308a0cu: goto label_308a0c;
        case 0x308a10u: goto label_308a10;
        case 0x308a14u: goto label_308a14;
        default: break;
    }

    ctx->pc = 0x308960u;

label_308960:
    // 0x308960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308964:
    // 0x308964: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x308964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_308968:
    // 0x308968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30896c:
    // 0x30896c: 0x8c820234  lw          $v0, 0x234($a0)
    ctx->pc = 0x30896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_308970:
    // 0x308970: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
label_308974:
    if (ctx->pc == 0x308974u) {
        ctx->pc = 0x308974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308970u;
        // 0x308974: 0x8c450334  lw          $a1, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308978u;
        goto label_308978;
    }
    ctx->pc = 0x308970u;
    {
        const bool branch_taken_0x308970 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x308974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308970u;
        // 0x308974: 0x8c450334  lw          $a1, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308970) {
            ctx->pc = 0x3089D0u;
            goto label_3089d0;
        }
    }
    ctx->pc = 0x308978u;
label_308978:
    // 0x308978: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x308978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
label_30897c:
    // 0x30897c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x30897cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_308980:
    // 0x308980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308984:
    // 0x308984: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_308988:
    if (ctx->pc == 0x308988u) {
        ctx->pc = 0x30898Cu;
        goto label_30898c;
    }
    ctx->pc = 0x308984u;
    {
        const bool branch_taken_0x308984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x308984) {
            ctx->pc = 0x3089D0u;
            goto label_3089d0;
        }
    }
    ctx->pc = 0x30898Cu;
label_30898c:
    // 0x30898c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x30898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_308990:
    // 0x308990: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_308994:
    // 0x308994: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x308994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_308998:
    // 0x308998: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_30899c:
    if (ctx->pc == 0x30899Cu) {
        ctx->pc = 0x30899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308998u;
        // 0x30899c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089A0u;
        goto label_3089a0;
    }
    ctx->pc = 0x308998u;
    {
        const bool branch_taken_0x308998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308998u;
        // 0x30899c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308998) {
            ctx->pc = 0x3089ECu;
            goto label_3089ec;
        }
    }
    ctx->pc = 0x3089A0u;
label_3089a0:
    // 0x3089a0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3089a4:
    if (ctx->pc == 0x3089A4u) {
        ctx->pc = 0x3089A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089A0u;
        // 0x3089a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089A8u;
        goto label_3089a8;
    }
    ctx->pc = 0x3089A0u;
    {
        const bool branch_taken_0x3089a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3089A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089A0u;
        // 0x3089a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089a0) {
            ctx->pc = 0x3089C8u;
            goto label_3089c8;
        }
    }
    ctx->pc = 0x3089A8u;
label_3089a8:
    // 0x3089a8: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x3089a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_3089ac:
    // 0x3089ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3089acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3089b0:
    // 0x3089b0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x3089b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3089b4:
    // 0x3089b4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3089b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3089b8:
    // 0x3089b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3089b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3089bc:
    // 0x3089bc: 0x0  nop
    ctx->pc = 0x3089bcu;
    // NOP
label_3089c0:
    // 0x3089c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3089c4:
    if (ctx->pc == 0x3089C4u) {
        ctx->pc = 0x3089C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089C0u;
        // 0x3089c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089C8u;
        goto label_3089c8;
    }
    ctx->pc = 0x3089C0u;
    {
        const bool branch_taken_0x3089c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3089c0) {
            ctx->pc = 0x3089C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089C0u;
            // 0x3089c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3089C8u;
            goto label_3089c8;
        }
    }
    ctx->pc = 0x3089C8u;
label_3089c8:
    // 0x3089c8: 0x55200009  bnel        $t1, $zero, . + 4 + (0x9 << 2)
label_3089cc:
    if (ctx->pc == 0x3089CCu) {
        ctx->pc = 0x3089CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089C8u;
        // 0x3089cc: 0x8c8202e4  lw          $v0, 0x2E4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089D0u;
        goto label_3089d0;
    }
    ctx->pc = 0x3089C8u;
    {
        const bool branch_taken_0x3089c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3089c8) {
            ctx->pc = 0x3089CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089C8u;
            // 0x3089cc: 0x8c8202e4  lw          $v0, 0x2E4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3089F0u;
            goto label_3089f0;
        }
    }
    ctx->pc = 0x3089D0u;
label_3089d0:
    // 0x3089d0: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_3089d4:
    if (ctx->pc == 0x3089D4u) {
        ctx->pc = 0x3089D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089D0u;
        // 0x3089d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089D8u;
        goto label_3089d8;
    }
    ctx->pc = 0x3089D0u;
    {
        const bool branch_taken_0x3089d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3089D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089D0u;
        // 0x3089d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089d0) {
            ctx->pc = 0x308A08u;
            goto label_308a08;
        }
    }
    ctx->pc = 0x3089D8u;
label_3089d8:
    // 0x3089d8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3089d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3089dc:
    // 0x3089dc: 0xc098800  jal         func_262000
label_3089e0:
    if (ctx->pc == 0x3089E0u) {
        ctx->pc = 0x3089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089DCu;
        // 0x3089e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089E4u;
        goto label_3089e4;
    }
    ctx->pc = 0x3089DCu;
    SET_GPR_U32(ctx, 31, 0x3089E4u);
    ctx->pc = 0x3089E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089DCu;
    // 0x3089e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262000u, 0x3089DCu, 0x3089E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089E4u;
label_3089e4:
    // 0x3089e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3089e8:
    if (ctx->pc == 0x3089E8u) {
        ctx->pc = 0x3089E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089E4u;
        // 0x3089e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089ECu;
        goto label_3089ec;
    }
    ctx->pc = 0x3089E4u;
    {
        const bool branch_taken_0x3089e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3089E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089E4u;
        // 0x3089e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089e4) {
            ctx->pc = 0x308A0Cu;
            goto label_308a0c;
        }
    }
    ctx->pc = 0x3089ECu;
label_3089ec:
    // 0x3089ec: 0x8c8202e4  lw          $v0, 0x2E4($a0)
    ctx->pc = 0x3089ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
label_3089f0:
    // 0x3089f0: 0xac880290  sw          $t0, 0x290($a0)
    ctx->pc = 0x3089f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 8));
label_3089f4:
    // 0x3089f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3089f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3089f8:
    // 0x3089f8: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_3089fc:
    // 0x3089fc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_308a00:
    // 0x308a00: 0x40f809  jalr        $v0
label_308a04:
    if (ctx->pc == 0x308A04u) {
        ctx->pc = 0x308A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A00u;
        // 0x308a04: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A08u;
        goto label_308a08;
    }
    ctx->pc = 0x308A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308A08u);
        ctx->pc = 0x308A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A00u;
        // 0x308a04: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A00u, 0x308A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308A08u;
label_308a08:
    // 0x308a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308a0c:
    // 0x308a0c: 0x3e00008  jr          $ra
label_308a10:
    if (ctx->pc == 0x308A10u) {
        ctx->pc = 0x308A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A0Cu;
        // 0x308a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A14u;
        goto label_308a14;
    }
    ctx->pc = 0x308A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A0Cu;
        // 0x308a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A14u;
label_308a14:
    // 0x308a14: 0x0  nop
    ctx->pc = 0x308a14u;
    // NOP
    ctx->pc = 0x308a18u;
}
