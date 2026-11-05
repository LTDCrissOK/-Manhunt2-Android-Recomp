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

// Function: sub_003A9920
// Address: 0x3a9920 - 0x3a9a20
void sub_003A9920_0x3a9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9920_0x3a9920");
#endif

    switch (ctx->pc) {
        case 0x3a9920u: goto label_3a9920;
        case 0x3a9924u: goto label_3a9924;
        case 0x3a9928u: goto label_3a9928;
        case 0x3a992cu: goto label_3a992c;
        case 0x3a9930u: goto label_3a9930;
        case 0x3a9934u: goto label_3a9934;
        case 0x3a9938u: goto label_3a9938;
        case 0x3a993cu: goto label_3a993c;
        case 0x3a9940u: goto label_3a9940;
        case 0x3a9944u: goto label_3a9944;
        case 0x3a9948u: goto label_3a9948;
        case 0x3a994cu: goto label_3a994c;
        case 0x3a9950u: goto label_3a9950;
        case 0x3a9954u: goto label_3a9954;
        case 0x3a9958u: goto label_3a9958;
        case 0x3a995cu: goto label_3a995c;
        case 0x3a9960u: goto label_3a9960;
        case 0x3a9964u: goto label_3a9964;
        case 0x3a9968u: goto label_3a9968;
        case 0x3a996cu: goto label_3a996c;
        case 0x3a9970u: goto label_3a9970;
        case 0x3a9974u: goto label_3a9974;
        case 0x3a9978u: goto label_3a9978;
        case 0x3a997cu: goto label_3a997c;
        case 0x3a9980u: goto label_3a9980;
        case 0x3a9984u: goto label_3a9984;
        case 0x3a9988u: goto label_3a9988;
        case 0x3a998cu: goto label_3a998c;
        case 0x3a9990u: goto label_3a9990;
        case 0x3a9994u: goto label_3a9994;
        case 0x3a9998u: goto label_3a9998;
        case 0x3a999cu: goto label_3a999c;
        case 0x3a99a0u: goto label_3a99a0;
        case 0x3a99a4u: goto label_3a99a4;
        case 0x3a99a8u: goto label_3a99a8;
        case 0x3a99acu: goto label_3a99ac;
        case 0x3a99b0u: goto label_3a99b0;
        case 0x3a99b4u: goto label_3a99b4;
        case 0x3a99b8u: goto label_3a99b8;
        case 0x3a99bcu: goto label_3a99bc;
        case 0x3a99c0u: goto label_3a99c0;
        case 0x3a99c4u: goto label_3a99c4;
        case 0x3a99c8u: goto label_3a99c8;
        case 0x3a99ccu: goto label_3a99cc;
        case 0x3a99d0u: goto label_3a99d0;
        case 0x3a99d4u: goto label_3a99d4;
        case 0x3a99d8u: goto label_3a99d8;
        case 0x3a99dcu: goto label_3a99dc;
        case 0x3a99e0u: goto label_3a99e0;
        case 0x3a99e4u: goto label_3a99e4;
        case 0x3a99e8u: goto label_3a99e8;
        case 0x3a99ecu: goto label_3a99ec;
        case 0x3a99f0u: goto label_3a99f0;
        case 0x3a99f4u: goto label_3a99f4;
        case 0x3a99f8u: goto label_3a99f8;
        case 0x3a99fcu: goto label_3a99fc;
        case 0x3a9a00u: goto label_3a9a00;
        case 0x3a9a04u: goto label_3a9a04;
        case 0x3a9a08u: goto label_3a9a08;
        case 0x3a9a0cu: goto label_3a9a0c;
        case 0x3a9a10u: goto label_3a9a10;
        case 0x3a9a14u: goto label_3a9a14;
        case 0x3a9a18u: goto label_3a9a18;
        case 0x3a9a1cu: goto label_3a9a1c;
        default: break;
    }

    ctx->pc = 0x3a9920u;

label_3a9920:
    // 0x3a9920: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9924:
    // 0x3a9924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9928:
    // 0x3a9928: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a992c:
    // 0x3a992c: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_3a9930:
    if (ctx->pc == 0x3A9930u) {
        ctx->pc = 0x3A9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A992Cu;
        // 0x3a9930: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9934u;
        goto label_3a9934;
    }
    ctx->pc = 0x3A992Cu;
    {
        const bool branch_taken_0x3a992c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3a992c) {
            ctx->pc = 0x3A9930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A992Cu;
            // 0x3a9930: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9944u;
            goto label_3a9944;
        }
    }
    ctx->pc = 0x3A9934u;
label_3a9934:
    // 0x3a9934: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9938:
    // 0x3a9938: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a993c:
    // 0x3a993c: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_3a9940:
    if (ctx->pc == 0x3A9940u) {
        ctx->pc = 0x3A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A993Cu;
        // 0x3a9940: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9944u;
        goto label_3a9944;
    }
    ctx->pc = 0x3A993Cu;
    {
        const bool branch_taken_0x3a993c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3a993c) {
            ctx->pc = 0x3A9940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A993Cu;
            // 0x3a9940: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9944u;
            goto label_3a9944;
        }
    }
    ctx->pc = 0x3A9944u;
label_3a9944:
    // 0x3a9944: 0x3e00008  jr          $ra
label_3a9948:
    if (ctx->pc == 0x3A9948u) {
        ctx->pc = 0x3A994Cu;
        goto label_3a994c;
    }
    ctx->pc = 0x3A9944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A994Cu;
label_3a994c:
    // 0x3a994c: 0x0  nop
    ctx->pc = 0x3a994cu;
    // NOP
label_3a9950:
    // 0x3a9950: 0x0  nop
    ctx->pc = 0x3a9950u;
    // NOP
label_3a9954:
    // 0x3a9954: 0x0  nop
    ctx->pc = 0x3a9954u;
    // NOP
label_3a9958:
    // 0x3a9958: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a995c:
    // 0x3a995c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a995cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a9960:
    // 0x3a9960: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9964:
    // 0x3a9964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9968:
    // 0x3a9968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a996c:
    // 0x3a996c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_3a9970:
    if (ctx->pc == 0x3A9970u) {
        ctx->pc = 0x3A9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A996Cu;
        // 0x3a9970: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9974u;
        goto label_3a9974;
    }
    ctx->pc = 0x3A996Cu;
    {
        const bool branch_taken_0x3a996c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A996Cu;
        // 0x3a9970: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a996c) {
            ctx->pc = 0x3A9984u;
            goto label_3a9984;
        }
    }
    ctx->pc = 0x3A9974u;
label_3a9974:
    // 0x3a9974: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a9974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_3a9978:
    // 0x3a9978: 0x8c83a0c8  lw          $v1, -0x5F38($a0)
    ctx->pc = 0x3a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942920)));
label_3a997c:
    // 0x3a997c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3a9980:
    if (ctx->pc == 0x3A9980u) {
        ctx->pc = 0x3A9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A997Cu;
        // 0x3a9980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9984u;
        goto label_3a9984;
    }
    ctx->pc = 0x3A997Cu;
    {
        const bool branch_taken_0x3a997c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A997Cu;
        // 0x3a9980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a997c) {
            ctx->pc = 0x3A99B0u;
            goto label_3a99b0;
        }
    }
    ctx->pc = 0x3A9984u;
label_3a9984:
    // 0x3a9984: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3a9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a9988:
    // 0x3a9988: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a998c:
    // 0x3a998c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9990:
    // 0x3a9990: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a9994:
    // 0x3a9994: 0x40f809  jalr        $v0
label_3a9998:
    if (ctx->pc == 0x3A9998u) {
        ctx->pc = 0x3A9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9994u;
        // 0x3a9998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A999Cu;
        goto label_3a999c;
    }
    ctx->pc = 0x3A9994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A999Cu);
        ctx->pc = 0x3A9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9994u;
        // 0x3a9998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9994u, 0x3A999Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A999Cu;
label_3a999c:
    // 0x3a999c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x3a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3a99a0:
    // 0x3a99a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a99a4:
    // 0x3a99a4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3a99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3a99a8:
    // 0x3a99a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a99ac:
    // 0x3a99ac: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x3a99acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_3a99b0:
    // 0x3a99b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a99b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a99b4:
    // 0x3a99b4: 0x3e00008  jr          $ra
label_3a99b8:
    if (ctx->pc == 0x3A99B8u) {
        ctx->pc = 0x3A99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99B4u;
        // 0x3a99b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99BCu;
        goto label_3a99bc;
    }
    ctx->pc = 0x3A99B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99B4u;
        // 0x3a99b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A99B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A99BCu;
label_3a99bc:
    // 0x3a99bc: 0x0  nop
    ctx->pc = 0x3a99bcu;
    // NOP
label_3a99c0:
    // 0x3a99c0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a99c4:
    // 0x3a99c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a99c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a99c8:
    // 0x3a99c8: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a99cc:
    // 0x3a99cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a99d0:
    // 0x3a99d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a99d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a99d4:
    // 0x3a99d4: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_3a99d8:
    if (ctx->pc == 0x3A99D8u) {
        ctx->pc = 0x3A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99D4u;
        // 0x3a99d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99DCu;
        goto label_3a99dc;
    }
    ctx->pc = 0x3A99D4u;
    {
        const bool branch_taken_0x3a99d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99D4u;
        // 0x3a99d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99d4) {
            ctx->pc = 0x3A99ECu;
            goto label_3a99ec;
        }
    }
    ctx->pc = 0x3A99DCu;
label_3a99dc:
    // 0x3a99dc: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_3a99e0:
    // 0x3a99e0: 0x8c83a0c8  lw          $v1, -0x5F38($a0)
    ctx->pc = 0x3a99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942920)));
label_3a99e4:
    // 0x3a99e4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_3a99e8:
    if (ctx->pc == 0x3A99E8u) {
        ctx->pc = 0x3A99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99E4u;
        // 0x3a99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99ECu;
        goto label_3a99ec;
    }
    ctx->pc = 0x3A99E4u;
    {
        const bool branch_taken_0x3a99e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99E4u;
        // 0x3a99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99e4) {
            ctx->pc = 0x3A9A10u;
            goto label_3a9a10;
        }
    }
    ctx->pc = 0x3A99ECu;
label_3a99ec:
    // 0x3a99ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3a99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a99f0:
    // 0x3a99f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a99f4:
    // 0x3a99f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a99f8:
    // 0x3a99f8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a99fc:
    // 0x3a99fc: 0x40f809  jalr        $v0
label_3a9a00:
    if (ctx->pc == 0x3A9A00u) {
        ctx->pc = 0x3A9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99FCu;
        // 0x3a9a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A04u;
        goto label_3a9a04;
    }
    ctx->pc = 0x3A99FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9A04u);
        ctx->pc = 0x3A9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99FCu;
        // 0x3a9a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A99FCu, 0x3A9A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9A04u;
label_3a9a04:
    // 0x3a9a04: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3a9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3a9a08:
    // 0x3a9a08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a9a0c:
    // 0x3a9a0c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x3a9a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_3a9a10:
    // 0x3a9a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9a14:
    // 0x3a9a14: 0x3e00008  jr          $ra
label_3a9a18:
    if (ctx->pc == 0x3A9A18u) {
        ctx->pc = 0x3A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A14u;
        // 0x3a9a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A1Cu;
        goto label_3a9a1c;
    }
    ctx->pc = 0x3A9A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A14u;
        // 0x3a9a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9A1Cu;
label_3a9a1c:
    // 0x3a9a1c: 0x0  nop
    ctx->pc = 0x3a9a1cu;
    // NOP
    ctx->pc = 0x3a9a20u;
}
