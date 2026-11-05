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

// Function: sub_00304FD0
// Address: 0x304fd0 - 0x305060
void sub_00304FD0_0x304fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304FD0_0x304fd0");
#endif

    switch (ctx->pc) {
        case 0x304fecu: goto label_304fec;
        default: break;
    }

    ctx->pc = 0x304fd0u;

    // 0x304fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304fd4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x304fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x304fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304fdc: 0x245065a0  addiu       $s0, $v0, 0x65A0
    ctx->pc = 0x304fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26016));
    // 0x304fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304fe4: 0xc0c129e  jal         func_304A78
    ctx->pc = 0x304FE4u;
    SET_GPR_U32(ctx, 31, 0x304FECu);
    ctx->pc = 0x304FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FE4u;
    // 0x304fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A78u, 0x304FE4u, 0x304FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FECu;
label_304fec:
    // 0x304fec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304ff0: 0x8c62bb54  lw          $v0, -0x44AC($v1)
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBB54u));
    // 0x304ff4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x304FF4u;
    {
        const bool branch_taken_0x304ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FF4u;
        // 0x304ff8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ff4) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x304FFCu;
    // 0x304ffc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x305000: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x305000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x305004: 0x8062bb5b  lb          $v0, -0x44A5($v1)
    ctx->pc = 0x305004u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FBB5Bu));
    // 0x305008: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305008u;
    {
        const bool branch_taken_0x305008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x305008) {
            ctx->pc = 0x30500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305008u;
            // 0x30500c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30501Cu;
            goto label_30501c;
        }
    }
    ctx->pc = 0x305010u;
    // 0x305010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305014: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305014u;
    {
        const bool branch_taken_0x305014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305014u;
        // 0x305018: 0xa062bb5b  sb          $v0, -0x44A5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294949723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305014) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x30501Cu;
label_30501c:
    // 0x30501c: 0x8062bb5c  lb          $v0, -0x44A4($v1)
    ctx->pc = 0x30501cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949724)));
    // 0x305020: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305020u;
    {
        const bool branch_taken_0x305020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x305020) {
            ctx->pc = 0x305024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305020u;
            // 0x305024: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305034u;
            goto label_305034;
        }
    }
    ctx->pc = 0x305028u;
    // 0x305028: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30502c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30502Cu;
    {
        const bool branch_taken_0x30502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30502Cu;
        // 0x305030: 0xa062bb5c  sb          $v0, -0x44A4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294949724), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30502c) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x305034u;
label_305034:
    // 0x305034: 0x8062bb5d  lb          $v0, -0x44A3($v1)
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949725)));
    // 0x305038: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305038u;
    {
        const bool branch_taken_0x305038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305038u;
        // 0x30503c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305038) {
            ctx->pc = 0x30504Cu;
            goto label_30504c;
        }
    }
    ctx->pc = 0x305040u;
    // 0x305040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305044: 0xa062bb5d  sb          $v0, -0x44A3($v1)
    ctx->pc = 0x305044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294949725), (uint8_t)GPR_U32(ctx, 2));
label_305048:
    // 0x305048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30504c:
    // 0x30504c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305050: 0xaca0bb54  sw          $zero, -0x44AC($a1)
    ctx->pc = 0x305050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294949716), GPR_U32(ctx, 0));
    // 0x305054: 0x3e00008  jr          $ra
    ctx->pc = 0x305054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305054u;
        // 0x305058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30505Cu;
    // 0x30505c: 0x0  nop
    ctx->pc = 0x30505cu;
    // NOP
    ctx->pc = 0x305060u;
}
